#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void metodo1()
{

    char palavra[80];
    int contagem = 0;
    getchar();

    printf("Escreva uma palavra:\n");
    fgets(palavra,sizeof(palavra),stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i = 0; i < sizeof(palavra); i++){

        if('A'<= palavra[i] && palavra[i] <= 'Z'){

        printf("%c", palavra[i]);
        contagem++;

        }
        
    }
    printf("\n%d\n", contagem);
}


void metodo3()
{

    char palavra[80];
    int contagem = 0;
    getchar();

    printf("Escreva uma palavra:\n");
    fgets(palavra,sizeof(palavra),stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i = sizeof(palavra); i > 0; i--){

        if('A'<= palavra[i] && palavra[i] <= 'Z'){

        printf("%c", palavra[i]);
        contagem++;

        }
        
    }
    printf("\n%d\n", contagem);
}

void metodo5()
{

    char palavra[80];
    int contagem = 0;
    getchar();

    printf("Escreva uma palavra:\n");
    fgets(palavra,sizeof(palavra),stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i = sizeof(palavra); i > 0; i--){

        if('1'<= palavra[i] && palavra[i] <= '9'){

        printf("%c", palavra[i]);
        contagem++;

        }
        
    }
    printf("\n%d\n", contagem);
}


void metodo6()
{

    char palavra[80];
    int contagem = 0;
    getchar();

    printf("Escreva uma palavra:\n");
    fgets(palavra,sizeof(palavra),stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i = 0; i< sizeof(palavra); i++){

        if(!('A'<= palavra[i] && palavra[i] <= 'Z' || '1'<= palavra[i] && palavra[i] <= '9') ){

        printf("%c", palavra[i]);
        contagem++;

        }
        
    }
    printf("\n%d\n", contagem);
}


void metodo7(){

    int a = 0, b = 0, n = 0, qnt = 0, j = 0;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    getchar();

    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    getchar();

    printf("Digite a quantidade de valorem a serem lidos:\n");
    scanf("%d", &n);
    getchar();

    int numeros[n];

    

    for(int i = 0; i < n; i++){

        scanf("%d",&numeros[i]);
        getchar();
        
        if(a <= numeros[j] && numeros[j] <= b && ((numeros[j]%6) == 0)){

        qnt++;
        
        }


    }

    

    printf("\n%d", qnt);

}


void metodo8(){

    int a = 0, b = 0, n = 0, qnt = 0, j = 0;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    getchar();

    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    getchar();

    printf("Digite a quantidade de valorem a serem lidos:\n");
    scanf("%d", &n);
    getchar();

    int numeros[n];

    

    for(int i = 0; i < n; i++){

        scanf("%d",&numeros[i]);
        getchar();
        
        if(a <= numeros[j] && numeros[j] <= b && (numeros[j]%4) == 0){

        qnt++;
        
        }


    }

    

    printf("\n%d", qnt);

}


void metodo9(){

    double a = 0, b = 0; 
    int n = 0, qnt = 0, j = 0;

    printf("Digite o valor de a:\n");
    scanf("%lf", &a);
    getchar();

    printf("Digite o valor de b:\n");
    scanf("%lf", &b);
    getchar();

    printf("Digite a quantidade de valorem a serem lidos:\n");
    scanf("%d", &n);
    getchar();

    double numeros[n];

    for(int i = 0; i < n; i++){

        scanf("%lf",&numeros[i]);
        getchar();
        
        if(a <= numeros[i] && numeros[i] <= b && ((int)numeros[i]%2 == 0)){

        printf("%lf", numeros[i]);
        
        }


    }

  

}

