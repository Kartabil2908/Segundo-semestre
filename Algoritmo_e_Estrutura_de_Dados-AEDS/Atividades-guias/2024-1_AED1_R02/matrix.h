typedef struct {
    int linha;
    int coluna;
    int **dados;
} Matrix;

typedef Matrix* ref_matrix;

// Função para ler matriz do arquivo MATRIZ1.TXT
ref_matrix ler_matriz_do_arquivo(const char *arquivo) 
{
    ref_matrix matriz = (ref_matrix)malloc(sizeof(Matrix));
    
    FILE *fp = fopen(arquivo, "r");

    fscanf(fp, "%d %d", &matriz->linha, &matriz->coluna);
    
    matriz->dados = (int **)malloc(matriz->linha * sizeof(int *));
    
    for (int i = 0; i < matriz->linha; i++) 
    {
        matriz->dados[i] = (int *)malloc(matriz->coluna * sizeof(int));
        
        for (int j = 0; j < matriz->coluna; j++) 
        {
            fscanf(fp, "%d", &matriz->dados[i][j]);
        }
    }
    fclose(fp);
    return matriz;
}

// Função para criar uma matriz tridiagonal crescente
ref_matrix criar_matriz_tridiagonal(int n)
{
    
    ref_matrix matriz = (ref_matrix)malloc(sizeof(Matrix));
    
    matriz->linha = n;
    matriz->coluna = n;
    matriz->dados = (int **)malloc(n * sizeof(int *));
    
    for (int i = 0; i < n; i++) 
    {
        matriz->dados[i] = (int *)malloc(n * sizeof(int));
        
        for (int j = 0; j < n; j++) 
        {
            if (i == j) 
            {
                matriz->dados[i][j] = i + 1;
                
            } 
            else if (i == j - 1) 
            {
                matriz->dados[i][j] = i;
            } 
            else if (i == j + 1) 
            {
                matriz->dados[i][j] = i + 2;
                
            } 
            else 
            {
                matriz->dados[i][j] = 0;
            }
        }
    }
    
    return matriz;
}

// Função para mostrar uma matriz
void mostrar_matriz(ref_matrix matriz) 
{
    for (int i = 0; i < matriz->linha; i++) 
    {
        for (int j = 0; j < matriz->coluna; j++) 
        {
            printf("%d ", matriz->dados[i][j]);
        }
        printf("\n");
    }
}

// Função para gravar uma matriz em um arquivo
void gravar_matriz_em_arquivo(ref_matrix matriz, const char *arquivo) 
{
    FILE *fp = fopen(arquivo, "w");
    
    fprintf(fp, "%d %d\n", matriz->linha, matriz->coluna);
    
    for (int i = 0; i < matriz->linha; i++) 
    {
        for (int j = 0; j < matriz->coluna; j++) 
        {
            fprintf(fp, "%d ", matriz->dados[i][j]);
        }
        
        fprintf(fp, "\n");
    }
    fclose(fp);
}


// Função para criar uma matriz tridiagonal secundária decrescente
ref_matrix criar_matriz_tridiagonal_secundaria_decrescente(int n) 
{
    ref_matrix matriz = (ref_matrix)malloc(sizeof(Matrix));
    matriz->linha = n;
    matriz->coluna = n;
    matriz->dados = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) 
    {
        matriz->dados[i] = (int *)malloc(n * sizeof(int));
        
        for (int j = 0; j < n; j++) 
        {
            if (i == j - 1) 
            {
                matriz->dados[i][j] = n - j;
                
            } 
            else if (i == j + 1) 
            {
                matriz->dados[i][j] = n - j - 1;
                
            } 
            else 
            {
                matriz->dados[i][j] = 0;
            }
        }
    }
    
    return matriz;
}

int verifica_potencias_por_linha(ref_matrix matriz) 
{
    for (int i = 0; i < matriz->linha; i++) 
    {
        int potencia = 1;
        
        for (int j = 0; j < matriz->coluna; j++) 
        {
            if (matriz->dados[i][j]!= potencia) 
            {
                return 0; // não apresenta a característica
            }
            
            potencia = potencia * 2; 
        }
    }
    return 1; // apresenta a característica
}


int verifica_potencias_por_coluna(ref_matrix matriz) 
{
    for (int j = 0; j < matriz->coluna; j++) 
    {
        int potencia = 1;
        
        for (int i = 0; i < matriz->linha; i++) 
        {
            if (matriz->dados[i][j]!= potencia) 
            {
                return 0; // não apresenta a característica
            }
            
            potencia *= 2; // incrementa a potência de 2
        }
    }
    return 1; // apresenta a característica
}
