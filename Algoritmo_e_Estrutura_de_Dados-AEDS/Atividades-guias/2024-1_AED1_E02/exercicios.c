/* 

Autor: Bernardo Ladeira Kartabil
Identificação: 1449304

*/

#include <stdio.h>
#include "procedimentos.h"

int main()
{

    int condicao = 0, opcao = 0, num = 0;

// -------------------- FAZENDO O MENU ------------------------------- //
    
    printf("Selecione uma das opções abaixo:\n1. Verificar se um número é par ou ímpar.\n2. Verificar se ímpar e menor que -25, ou par e maior que 25.\n3. Verificar se um número pertence ao intervalo aberto entre (35:65).\n4.pertence ao intervalo fechado entre [15:60].\n5.Dizer se há ou não interseção de um número entre [10:30] e (25:50),se não tiver, informe em qual está.\n6.Verificar se 2 números são par ou ímpar\n7.Verificar se 2 números são par ou ímpar e negativo ou positivo\n8.Verificar se um número é maior, menor ou igual que 1/3 do primeiro\n9. Verificar um número em intervalo customizado\n ");
         
    scanf("%d", &opcao);
    switch (opcao){

        case 1:
            
            condicao = verificarParImpar();
            
            break;

        case 2:

            verificarSeMaiorMenor25();

            break;

        case 3:

            verificarIntervaloAberto();

            break;
        
        case 4:
            
            verificarIntervaloFechado();

        case 5:
 
            verificarIntersecao();
            
            break;

        case 6:
 
        verificarParImparNumeros();
            
            break;

        case 7:

        verificarParImparNegativoPositivo();

            break;

        case 8:

        verificarMaiorMenorUmTerco();

            break;

        case 9:

        verificarIntervaloCustom(); // Exercícios 9 e 10 no mesmo comando!

            break;

        case 10:

        verificarIntervaloCaractereCustom(); // OBS, TIVE DIFICULDADE E NÃO SEI O QUE ESTÁ DANDO ERRADO

        
    }
   
    printf("Aperte <ENTER> para finalizar\n");
    getchar();


    
    
    return (0);
}

