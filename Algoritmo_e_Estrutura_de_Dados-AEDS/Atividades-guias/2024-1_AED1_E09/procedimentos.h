void readNegativeDoubleMatrix(int linha, int coluna, double matrix[linha][coluna])
{
    
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            do{
                
            scanf("%lf", &matrix[i][j]);
            getchar();
            
            } while(matrix[i][j] >= 0);

           

        }
    }    

}

void printDoubleMatrix(int linha, int coluna, double matrix[linha][coluna])
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf("%2.0lf ", matrix[i][j]);
        }

        printf("\n");
    }    
}

void fprintDoubleMatrix ( char filename[], int linha, int coluna, double matrix[linha][coluna])
{
    FILE* arquivo = fopen(filename, "wt");

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            fprintf(arquivo,"%2.0lf ", matrix[i][j]);
        }

        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}
    
void printDiagonalDoubleMatrix ( int linha , int coluna, double matrix[linha][coluna] )
{
    int i = 0;
    int j = 0;

    for(i = 0; i < linha; i++)
    {
        for( j = 0; j < coluna; j++)
        {
            if(i == j )
            {
                printf("%2.0lf ", matrix[i][j]);
            }
            
        }
    }   
    
    
}

void printSDiagonalDoubleMatrix(int linha, int coluna, double matrix[linha][coluna]) 
{
    printf("Diagonal Secundária da Matriz:\n");

    for (int i = 0; i < linha; i++) 
    {
        for (int j = 0; j < coluna; j++) 
        {
            if (i + j == coluna - 1) 
            {
                printf("%2.0lf ", matrix[i][j]);
            }
        }
    }

    printf("\n");
}

void printLDTriangleDoubleMatrix (int linha, int coluna , double matrix[linha][coluna])
{

    for (int i = 0; i < linha; i++) 
    {
        for (int j = 0; j < coluna; j++) 
        {
            if (i == j || i > j) 
            {
                printf("%2.0lf ", matrix[i][j]);
            } 
            else 
            {
                printf("   ");  // Espaço em branco para elementos acima da diagonal
            }
        }
        printf("\n");
    }

    printf("\n");

}

void printLUTriangleDoubleMatrix (int linha, int coluna , double matrix[linha][coluna])
{

    for (int i = 0; i < linha; i++) 
    {
        for (int j = 0; j < coluna; j++) 
        {
            if (i == j || i < j) 
            {
                printf("%2.0lf ", matrix[i][j]);
            } 
            else 
            {
                printf("   ");  // Espaço em branco para elementos abaixo da diagonal
            }
        }
        printf("\n");
    }

    printf("\n");

}

void printSLDTriangleDoubleMatrix(int linha, int coluna , double matrix[linha][coluna])
{

     for (int i = 0; i < linha; i++) 
    {
        for (int j = 0; j < coluna; j++) 
        {
            if (i + j == coluna - 1 || i > j) 
            {
                printf("%2.0lf ", matrix[i][j]);
            } 
            else 
            {
                printf("   ");  // Espaço em branco para elementos acima da diagonal
            }
        }
        printf("\n");
    }

    printf("\n");
    
}

void printSLUTriangleDoubleMatrix (int linha, int coluna , double matrix[linha][coluna] )
{
    
for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (i + j >= coluna - 1) {
                printf("%2.0lf ", matrix[i][j]);
            } else {
                printf("   "); // Espaço em branco para elementos acima da diagonal secundária
            }
        }
        printf("\n");
    }

    printf("\n");
    
}

void metodo1() {
    printf("Executando o Método 1\n");
    
    double negativeMatrix [10][10];
    
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    printDoubleMatrix ( 3, 3, negativeMatrix );
}



void metodo2() 
{
    printf("Executando o Método 2\n");

    double negativeMatrix [10][10];
    
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    fprintDoubleMatrix ( "MATRIX_01.TXT", 3, 3, negativeMatrix );
}

void metodo3() 
{
    printf("Executando o Método 3\n");

    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    printDiagonalDoubleMatrix ( 3, 3, negativeMatrix );

}

void metodo4() 
{
    printf("Executando o Método 4\n");

    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    printSDiagonalDoubleMatrix ( 3, 3, negativeMatrix );
}

void metodo5() 
{
    printf("Executando o Método 5\n");

    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    printLDTriangleDoubleMatrix ( 3, 3, negativeMatrix );
}

void metodo6() {
    printf("Executando o Método 6\n");

    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix);
    printLUTriangleDoubleMatrix ( 3, 3, negativeMatrix );
}

void metodo7() {
    printf("Executando o Método 7\n");

    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    printSLDTriangleDoubleMatrix ( 3, 3, negativeMatrix );
}

void metodo8() {
    printf("Executando o Método 8\n");
    
    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    printSLUTriangleDoubleMatrix ( 3, 3, negativeMatrix );
}

/*void metodo9() {
    printf("Executando o Método 9\n");

    double negativeMatrix [10][10];
    readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
    bool result = allZerosLTriangleDoubleMatrix ( 3, 3, negativeMatrix );

}

void metodo10() {
    printf("Executando o Método 10\n");
}*/