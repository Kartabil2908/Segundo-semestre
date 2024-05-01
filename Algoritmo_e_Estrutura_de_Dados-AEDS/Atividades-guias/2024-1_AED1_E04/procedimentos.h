#include <string.h>

void metodo1(){

    double num1 = 0.0, num2 = 0.0;
    int qtd_de_num = 0, qtd_fora = 0, qtd_dentro = 0;

    printf("Escreva um número real: ");
    scanf("%lf", &num1);
    getchar();

    printf("\nEscreva outro número real: ");
    scanf("%lf", &num2);
    getchar();

    printf("\nDigite a quantidade de números a serem lidos: " );
    scanf("%d", &qtd_de_num);
    getchar();
    
    double numeros[qtd_de_num];

    printf("\nDigite os números a serem lidos: " );

    for(int i = 0; i < qtd_de_num; i++){

        scanf("%lf", &numeros[i]);
        getchar();

        if(num1 <= numeros[i] && numeros[i] <= num2){

            qtd_dentro++;
            
        }
        else
        {
            qtd_fora++;
            
        }

    }

    printf("A quantidade de números que estão dentro do intervalo é %d\n", qtd_dentro);

    printf("A quantidade de números que estão fora do intervalo é %d\n", qtd_fora);
    


}

int verificarMaiuscula(char letra){

   int resposta = 0;

    if('A' <= letra && letra <= 'Z'){

        resposta = 1;

        return(resposta);

    }
    else
    {
        return(resposta);


}

}


void metodo2(){


    
    char palavra[80];
    int verificacao = 0, qtd_letra = 0;

    printf("Digite uma palavra: ");
    fgets(palavra,sizeof(palavra),stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i = 0; i < palavra[i]; i++){

        verificacao = verificarMaiuscula(palavra[i]);

        if(verificacao == 1 && palavra[i] > 'L'){
            qtd_letra++;
        } 
    }

    printf("A quantidade de caracteres maiores que L são %d\n", qtd_letra);

}



int metodo3(char cadeia[]){

    int verificacao = 0, qtd_letra = 0;
    
    for(int i = 0; i < cadeia[i]; i++){

        verificacao = verificarMaiuscula(cadeia[i]);

        if(verificacao == 1 && cadeia[i] > 'L'){
            qtd_letra++;
        } 
    }

    return(qtd_letra);


    
}

void metodo4(char cadeia[]){

    int verificacao = 0;
    
    for(int i = 0; i < cadeia[i]; i++){

        verificacao = verificarMaiuscula(cadeia[i]);

        if(verificacao == 1 && cadeia[i] > 'L')
        {
            printf("%c", cadeia[i]);
        } 
    }

}


int metodo5(char cadeia[]){

    int qtd_letra = 0;
    
    for(int i = 0; i < cadeia[i]; i++){

        if(cadeia[i] < 'l'){
            qtd_letra++;
        } 
    }

    return(qtd_letra);


    
}

void metodo6(char cadeia[]){

    
    for(int i = 0; i < cadeia[i]; i++){

        if(cadeia[i] < 'l')
        {
            printf("%c", cadeia[i]);
        } 
    }

}



