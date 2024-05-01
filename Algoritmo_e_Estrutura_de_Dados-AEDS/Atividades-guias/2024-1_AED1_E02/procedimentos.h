#include <stdbool.h>

int verificarParImpar()
{

    int num = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    getchar();

    bool x = false;
    
    if(num%2 == 0){ // verificando se é par
        
        printf("O número %d é par\n", num);

        return(x);
        
    }else
    { // verificando se é ímpar
        printf("O número %d é ímpar\n", num);
        
        x = true;
        
        return(x);
    }
}




void verificarSeMaiorMenor25()
{
    int condicao = 0, num = 0;
    bool x = false;

    
    printf("Digite um número: ");
    scanf("%d", &num);
    getchar();

    
    if(num%2 == 0){ // verificando se é par
        
        x = false;  
        
    }else
    { // verificando se é ímpar   
        
        x = true;
    }
    
    

    
//---------------------------------- Verificação com o número 25---------------------------------//

    if(condicao == 0 && num > 25)
    {
            printf("O número %d é par e maior que 25\n", num);
    }else
        {
            if(condicao == 0 && num < 25)
            {
                
                printf("O número %d é par e menor que 25\n", num);    
      
            }
                else if (condicao == 1 && num > 25)
                {

                    printf("O número %d é ímpar e maior que 25\n", num);
                }
        
                    else if (condicao == 1 && num > 25)
                    {
                        printf("O número %d é ímpar e maior que 25\n", num);

                    }
                        else if (condicao == 1 && num < 25)
                        {

                            printf("O número %d é ímpar e menor que 25\n", num);

                    }
        
        
//---------------------------------- Verificação com o número -25---------------------------------//        
                        if(condicao == 0 && num > -25)
                        {

                            printf("O número %d é par e maior que -25\n", num);
     
                        }
                            else if(condicao == 0 && num < -25)
                            {

                                printf("O número %d é par e menor que -25\n", num);
                
                            }
                                else if (condicao == 1 && num > -25)
                                {

                                    printf("O número %d é ímpar e maior que -25\n", num);

                                }
                                    else if (condicao == 1 && num < -25)
                                    {
                
                                        printf("O número %d é ímpar e menor que -25\n", num);

                                    }

        }

}



//---------------------------------- Verificação de intervalo aberto ---------------------------------//    

void verificarIntervaloAberto()
{

    int num = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    getchar();


    if(num > 35 && num < 65)
    {
        
        printf("O número %d está entre o intervalo aberto [35:65]\n", num);
        
    }else{

        printf("O número %d não está entre o intervalo aberto [35:65]\n", num);

    }
        
}

void verificarIntervaloFechado()
{
    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    getchar();

    if(num >= 15 && num <= 60)
    {
        
        printf("O número %d está entre o intervalo fechado [15:60]\n", num);
        
    }else{

        printf("O número %d não está entre o intervalo fechado [15:60]\n", num);

    }
        
}


void verificarIntersecao() // [10:30] e (25:50)
{

    int num = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    getchar();

    if(num >=10 && num <=30){

        printf("Esse número está dentro do intervalo fechado [10:30] ");
        
    }else{

        printf("Esse número não está dentro do intervalo fechado [10:30] ");

    }
        if(num >= 25 && num <=50){

        printf(" e esse número está dentro dos intervalo fechado (25:50)");
        
    }else{

            printf(" e esse número não está dentro dos intervalo fechado (25:50)");
            
        }

    
    
}

void verificarParImparNumeros(){ // verificar se DOIS números são pares ou Ímpares

    int condicao1 = 0, condicao2 = 0;

    condicao1 = verificarParImpar();
    condicao2 = verificarParImpar();


    }

void verificarParImparNegativoPositivo(){ // Verificar se um número é par ou ímpar, negativo ou positivo

    int num1 = 0, num2 = 0;
    bool x = false;
    bool y = false;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    getchar();

    printf("Digite outro número: ");
    scanf("%d", &num2);
    getchar();


    
    if(num1%2 == 0){ // verificando se é par
        
        printf("O número %d é par\n", num1);
        
    }else
    { // verificando se é ímpar   

        printf("O número %d é ímpar\n", num1);
    
    }
    
    if(num2%2 == 0){ // verificando se é par
        
       printf("O número %d é par\n", num2);
        
    }else
    { // verificando se é ímpar   
        
        printf("O número %d é ímpar\n", num2);
    }


    if(num1%2 == 0){ // verificando se é par
        
        
        
    }else
    { // verificando se é ímpar   
        
        x = true;
    }
    
    if(num2%2 == 0){ // verificando se é par
        
        y = false;  
        
    }else
    { // verificando se é ímpar   
        
        y = true;
    }
    

    if(num1 > 0){

        printf("O número %d é positivo\n", num1);
        
    }else{

        printf("O número %d é negativo e 0\n", num1);

    }

    if(num2 > 0){

        printf("O número %d é positivo\n", num2);
        
    }else{

        printf("O número %d é negativo e 0\n",num2);

    }

  }



void verificarMaiorMenorUmTerco(){ // Verificar se um número é maior, menor ou igual que 1/3 do primeiro


    double num1 = 0, num2 = 0;
    
    printf("Digite um número: ");
    scanf("%lf", &num1);
    getchar();

    printf("Digite outro número: ");
    scanf("%lf", &num2);
    getchar();

    num2 = num2/3.0;

    if(num1 < num2){

        printf("O número %lf é menor que o número %lf \n", num1, num2);

        
    }else if(num1 > num2){

        printf("O número %lf é maior que o número %lf \n", num1, num2);

        
    }else if(num1 == num2){

        printf("Os números são iguais \n");

        
    }
}


void verificarIntervaloCustom()
{

    double num1 = 0.0, numC1 = 0.0, numC2 = 0.0;
    

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    getchar();

    printf("Digite o segundo número: ");
    scanf("%lf", &numC1);
    getchar();

    printf("Digite o terceiro número: ");
    scanf("%lf", &numC2);
    getchar();

    if((numC1 < num1 && num1 < numC2) || (numC2 < num1 && num1 < numC1))
    {

        printf("O número %lf está dentro do intervalo [ %lf : %lf ] \n", num1, numC1, numC2);


    }else if(numC1 == num1 && num1 == numC2){

        printf("Os números são iguais \n");

    }else{

        printf("O número %lf não está dentro do intervalo [ %lf : %lf ] \n", num1, numC1, numC2);
        
    }
    
    
}



void verificarIntervaloCaractereCustom() 
{

    char letra1 = ' ', letraC1 = ' ', letraC2 = ' ';

    printf("Digite o primeiro caractere: ");
    scanf("%c", &letra1);
    getchar();

    printf("Digite o segundo caractere: ");
    scanf("%c", &letraC1);
    getchar();

    printf("Digite o terceiro caractere: ");
    scanf("%c", &letraC2);
    getchar();

    

    if((letraC1 < letra1 && letra1 < letraC2) || (letraC2 < letra1 && letra1 < letraC1))
    {

        printf("A letra %c está dentro do intervalo [ %c : %c ] \n", letra1, letraC1, letraC2);


    }else if(letraC1 == letra1 && letra1 == letraC2){

        printf("As letras são iguais \n");

    }else{

        printf("A letra %c não está dentro do intervalo [ %c : %c ] \n", letra1, letraC1, letraC2);
        
    }
    
    
}

    





