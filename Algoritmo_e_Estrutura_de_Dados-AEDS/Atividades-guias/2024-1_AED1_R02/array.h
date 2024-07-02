#include <stdlib.h>

typedef struct Array
{
    int tamanho;
    int *data;

} array; 
typedef array* ref_array;

ref_array criar_array(int tam)
{
    ref_array arr;
    
   arr = malloc(sizeof(array));
    arr->tamanho = tam;
     arr->data = malloc(arr->tamanho * sizeof(int));

    return (arr);
}

void gravar_arquivo(ref_array arr, char *nome_arquivo) {
    FILE *arquivo;

    arquivo = fopen(nome_arquivo, "w");
   

    // Gravar a quantidade de elementos na primeira linha
    fprintf(arquivo, "%d\n", arr->tamanho);

    // Gravar os dados ordenados
    for (int i = 0; i < arr->tamanho; i++) {
        fprintf(arquivo, "%d\n", arr->data[i]);
    }

    fclose(arquivo);
}

ref_array ler_arquivo(char *nome_arquivo) {
    FILE *arquivo;
    ref_array arr;
    int num_linhas;

    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return NULL;
    }

    // Contar o número de linhas do arquivo
    num_linhas = 0;
    char linha[1024];
    while (fgets(linha, 1024, arquivo)!= NULL) {
        num_linhas++;
    }

    // Alocar memória para o arranjo
    arr = (ref_array)malloc(sizeof(array));
    arr->tamanho = num_linhas;
    arr->data = (int*)malloc(num_linhas * sizeof(int));

    // Ler os dados do arquivo
    rewind(arquivo);
    for (int i = 0; i < num_linhas; i++) {
        fscanf(arquivo, "%d", &arr->data[i]);
    }

    fclose(arquivo);
    return arr;
}

void print_arranjo(ref_array arr)
{
    for(int i = 0; i < arr->tamanho; i++)
    {
        printf("%d ",arr->data[i]);
    }
}

int verifica_decrescente(ref_array arr) {
    for (int i = 0; i < arr->tamanho - 1; i++) {
        if (arr->data[i] < arr->data[i + 1]) {
            return 0; // Não está em ordem decrescente
        }
    }
    return 1; // Está em ordem decrescente
}

void ordenar_decrescente(ref_array arr) {
    int trocas;
    do {
        trocas = 0;
        for (int i = 0; i < arr->tamanho - 1; i++) {
            if (arr->data[i] < arr->data[i + 1]) {
                int temp = arr->data[i];
                arr->data[i] = arr->data[i + 1];
                arr->data[i + 1] = temp;
                trocas = 1;
            }
        }
    } while (trocas);
}


int contar_linhas_arquivo(char *nome_arquivo) 
{
    FILE *arquivo;
    int contador = 0;
    char linha[1024];

    while (fgets(linha, 1024, arquivo)!= NULL) 
    {
        contador++;
    }

    fclose(arquivo);
    return contador;
}


void inverter_arranjo(ref_array arranjo) 
{
    int i, temp;
    for (i = 0; i < arranjo->tamanho / 2; i++) {
        temp = arranjo->data[i];
        arranjo->data[i] = arranjo->data[arranjo->tamanho - i - 1];
        arranjo->data[arranjo->tamanho - i - 1] = temp;
    }
}

double arranjo_mediana(ref_array arr) 
{
    int n = arr->tamanho;
    int *dados = arr->data;

    // Ordenar o array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dados[j] > dados[j + 1]) {
                int temp = dados[j];
                dados[j] = dados[j + 1];
                dados[j + 1] = temp;
            }
        }
    }

    // Calcular a mediana
    if (n % 2 == 0) {
        return (dados[n / 2] + dados[n / 2 - 1]) / 2.0;
    } else {
        return dados[n / 2];
    }
}

// Função para ler o arquivo e preencher a tabela
void arranjo_ler_tabela(const char *arquivo, ref_array arr) 
{
    FILE *fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        exit(1);
    }

    fscanf(fp, "%d", &(arr->tamanho));
    arr->data = (int *)malloc(arr->tamanho * sizeof(int));

    for (int i = 0; i < arr->tamanho; i++) {
        fscanf(fp, "%d", &(arr->data[i]));
    }

    fclose(fp);
}


// Função para ler um arranjo de um arquivo
void arranjo_ler(const char *arquivo, ref_array arr) 
{
    FILE *fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        exit(1);
    }

    fscanf(fp, "%d", &(arr->tamanho));
    arr->data = (int *)malloc(arr->tamanho * sizeof(int));

    for (int i = 0; i < arr->tamanho; i++) {
        fscanf(fp, "%d", &(arr->data[i]));
    }

    fclose(fp);
}

// Função para filtrar os elementos comuns a dois arranjos
void arranjo_filtrar(ref_array arr3, ref_array arr1, ref_array arr2) 
{
    int i, j, k = 0;
    arr3->tamanho = 0;

    // Alocar memória para o arranjo de saída
    if (arr1->tamanho < arr2->tamanho) {
        arr3->data = (int *)malloc(arr1->tamanho * sizeof(int));
    } else {
        arr3->data = (int *)malloc(arr2->tamanho * sizeof(int));
    }

    for (i = 0; i < arr1->tamanho; i++) {
        for (j = 0; j < arr2->tamanho; j++) {
            if (arr1->data[i] == arr2->data[j]) {
                int existe = 0;
                for (int l = 0; l < k; l++) {
                    if (arr3->data[l] == arr1->data[i]) {
                        existe = 1;
                        break;
                    }
                }
                if (!existe) {
                    arr3->data[k++] = arr1->data[i];
                }
            }
        }
    }

    arr3->tamanho = k;
}

// Função para gravar um arranjo em um arquivo
void arranjo_gravar(const char *arquivo, ref_array arr) 
{
    FILE *fp = fopen(arquivo, "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        exit(1);
    }

    fprintf(fp, "%d\n", arr->tamanho);
    for (int i = 0; i < arr->tamanho; i++) {
        fprintf(fp, "%d\n", arr->data[i]);
    }

    fclose(fp);
}


void ler_binarios(const char *arquivo, ref_array arr) 
{
    FILE *fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        exit(1);
    }

    int tamanho = 0;
    char c;
    while ((c = fgetc(fp)) != EOF) {
        if (c == '0' || c == '1') {
            tamanho++;
        }
    }

    rewind(fp); // Voltar ao início do arquivo

    arr->tamanho = tamanho;
    arr->data = (int *)malloc(tamanho * sizeof(int));

    int i = 0;
    while ((c = fgetc(fp)) != EOF) {
        if (c == '0' || c == '1') {
            arr->data[i++] = c - '0'; // Converter char para int
        }
    }

    fclose(fp);
}

// Função para converter arranjo binário para decimal
int arranjo_paraDecimal(ref_array arr) 
{
    int decimal = 0;
    int potencia = 1;
    for (int i = arr->tamanho - 1; i >= 0; i--) {
        decimal += arr->data[i] * potencia;
        potencia *= 2;
    }
    return decimal;
}


