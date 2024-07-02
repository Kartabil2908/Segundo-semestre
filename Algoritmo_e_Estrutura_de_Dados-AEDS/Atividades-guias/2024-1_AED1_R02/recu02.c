#include <stdio.h>
#include "array.h"
#include "matrix.h"
#include <string.h>

typedef struct {
    int codigo;
    char *nome;
    float preco;
} Supermercado;


void metodo1() 
{
    ref_array arr;
    char nome_arquivo[] = "DADOS1.txt";
    char nome_arquivo_saida[] = "DECRESCENTE.txt";

    arr = ler_arquivo(nome_arquivo);

    if (!verifica_decrescente(arr)) 
    {
        ordenar_decrescente(arr);
    }
    
    gravar_arquivo(arr, nome_arquivo_saida);
    printf("Método 1 executado\n");

}



void metodo2() {
    
    ref_array arranjo = (ref_array) malloc(sizeof(array));
    int i;
    
    FILE *arquivo = fopen("DECRESCENTE.txt", "r");

    fscanf(arquivo, "%d", &(arranjo->tamanho));
    arranjo->data = (int*) malloc(arranjo->tamanho * sizeof(int));
    
    for (i = 0; i < arranjo->tamanho; i++) {
        fscanf(arquivo, "%d", &(arranjo->data[i]));
    }
    
    fclose(arquivo);
    
    inverter_arranjo(arranjo);

    arquivo = fopen("INVERTIDOS.TXT", "w");

    fprintf(arquivo, "%d\n", arranjo->tamanho);
    for (i = 0; i < arranjo->tamanho; i++) {
        fprintf(arquivo, "%d\n", arranjo->data[i]);
    }
    fclose(arquivo);

    printf("Método 2 executado\n");
}



void metodo3() 
{

    ref_array arr = (ref_array)malloc(sizeof(array));

    arranjo_ler_tabela("DADOS1.txt", arr);
    double mediana = arranjo_mediana(arr);
    printf("Mediana: %.2f\n", mediana);

    free(arr->data);
    free(arr);
    
    printf("Método 3 executado\n"); 
}


void metodo4() 
{
    ref_array arr1 = (ref_array)malloc(sizeof(array));
    ref_array arr2 = (ref_array)malloc(sizeof(array));
    ref_array arr3 = (ref_array)malloc(sizeof(array));

    arranjo_ler("DADOS1.txt", arr1);
    arranjo_ler("DADOS2.TXT", arr2);

    arranjo_filtrar(arr3, arr1, arr2);

    arranjo_gravar("FILTRADOS.TXT", arr3);
    
    printf("Método 4 executado\n");
}


void metodo5() 
{
    ref_array binario = (ref_array)malloc(sizeof(array));

    ler_binarios("BINARIOS1.TXT", binario);

    int decimal = arranjo_paraDecimal(binario);

    printf("O valor decimal é: %d\n", decimal);
    
    printf("Método 5 executado\n"); 

}
void metodo6() 
{
    ref_matrix matriz1 = ler_matriz_do_arquivo("MATRIZ1.TXT");
    int n;
    
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);
    
    ref_matrix matriz2 = criar_matriz_tridiagonal(n);
    
    mostrar_matriz(matriz2);
    
    gravar_matriz_em_arquivo(matriz2, "MATRIZ2.TXT");
    
    printf("Método 6 executado\n"); 
}
void metodo7() 
{
    ref_matrix matriz1 = ler_matriz_do_arquivo("MATRIZ1.TXT");
    int n;
    
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);
    
    ref_matrix matriz2 = criar_matriz_tridiagonal_secundaria_decrescente(n);
    mostrar_matriz(matriz2);
    
    gravar_matriz_em_arquivo(matriz2, "MATRIZ2.TXT");
    
    printf("Método 7 executado\n"); 
}

void metodo8() 
{ 
    ref_matrix matriz = ler_matriz_do_arquivo("MATRIZ3.TXT");
    
    if (verifica_potencias_por_linha(matriz)) 
    {
        printf("A matriz apresenta a característica de potências por linha!\n");
        
    } 
    else 
    {
        printf("A matriz não apresenta a característica de potências por linha!\n");
    }
    
    printf("Método 8 executado\n"); 
}
void metodo9() 
{
    ref_matrix matriz = ler_matriz_do_arquivo("MATRIZ4.TXT");
    
    if (verifica_potencias_por_coluna(matriz)) 
    {
        printf("A matriz apresenta a característica de potências por coluna!\n");
        
    } 
    else 
    {
        printf("A matriz não apresenta a característica de potências por coluna!\n");
    }
    
    printf("Método 9 executado\n"); 
}
void metodo10() 
{

    FILE *arquivo;
    int N, i;
    float preco_medio, preco_total = 0;
    Supermercado *supermercados;

    // Abrir arquivo DADOS3.TXT
    arquivo = fopen("DADOS3.TXT", "r");

    // Ler quantidade de supermercados
    fscanf(arquivo, "%d", &N);

    // Alocar memória para os supermercados
    supermercados = (Supermercado *) malloc(N * sizeof(Supermercado));

    // Ler informações de cada supermercado
    for (i = 0; i < N; i++) 
    {
        supermercados[i].nome = (char *) malloc(256 * sizeof(char)); // tamanho arbitrário para o nome
        fscanf(arquivo, "%d %s", &supermercados[i].codigo, supermercados[i].nome);
        
    }

    // Ler preço de cada supermercado
    for (i = 0; i < N; i++) 
    {
        fscanf(arquivo, "%f", &supermercados[i].preco);
        preco_total += supermercados[i].preco;
        
    }

    // Calcular preço médio
    preco_medio = preco_total / N;

    // Imprimir supermercados com preços inferiores à média
    printf("Supermercados com preços inferiores à média (%.2f):\n", preco_medio);
    
    for (i = 0; i < N; i++) 
    {
        if (supermercados[i].preco < preco_medio) 
        {
        printf("%d - %s: %.2f\n", supermercados[i].codigo, supermercados[i].nome, supermercados[i].preco);
        }
    }

    // Liberar memória
    for (i = 0; i < N; i++) {
        free(supermercados[i].nome);
    }
    free(supermercados);

    // Fechar arquivo
    fclose(arquivo);
    
    printf("Método 10 executado\n"); }


int main()
{
    int opcao;

    printf("Escolha um método (1-10): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            metodo1();
            break;
        case 2:
            metodo2();
            break;
        case 3:
            metodo3();
            break;
        case 4:
            metodo4();
            break;
        case 5:
            metodo5();
            break;
        case 6:
            metodo6();
            break;
        case 7:
            metodo7();
            break;
        case 8:
            metodo8();
            break;
        case 9:
            metodo9();
            break;
        case 10:
            metodo10();
            break;
        default:
            printf("Opção inválida!\n");
    }

    return (0);
}