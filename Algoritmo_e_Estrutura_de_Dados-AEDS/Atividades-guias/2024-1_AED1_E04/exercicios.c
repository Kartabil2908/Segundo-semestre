#include <stdio.h>
#include "procedimentos.h"

int main(){

    int opcao = 0;

    printf("Digite um método: ");
    scanf("%d", &opcao);
    getchar();
    

    switch(opcao){

        case 1:
            metodo1();
            break;
        case 2:
            metodo2();
            break;
        case 3:

            char cadeia[80];
            int resposta = 0;
            printf("Digite uma palavra: ");
            fgets(cadeia,sizeof(cadeia),stdin);
            
            cadeia[strcspn(cadeia, "\n")] = '\0';
            resposta = metodo3(cadeia);
            printf("%d\n", resposta);
            break;

        case 4:

            char palavra[80];
            
            printf("Digite uma palavra: ");
            fgets(palavra,sizeof(palavra),stdin);
            
            cadeia[strcspn(palavra, "\n")] = '\0';
            metodo4(palavra);
            printf("\n");

            break;

        case 5:

            char cadeia_M5[80];
            int resposta_M5 = 0;
            printf("Digite uma palavra: ");
            fgets(cadeia_M5,sizeof(cadeia_M5),stdin);
            
            cadeia_M5[strcspn(cadeia_M5, "\n")] = '\0';
            resposta_M5 = metodo5(cadeia_M5);
            printf("%d\n", resposta_M5);

            break;

        case 6:

            char cadeia_M6[80];
        
            printf("Digite uma palavra: ");
            fgets(cadeia_M6,sizeof(cadeia_M6),stdin);
            
            cadeia_M5[strcspn(cadeia_M6, "\n")] = '\0';
            metodo6(cadeia_M6);
            
            
            break;

        /*case 7:

         char cadeia_M6[80];
            int resposta_M6 = 0;
            printf("Digite uma palavra: ");
            fgets(cadeia_M6,sizeof(cadeia_M6),stdin);
            
            cadeia_M6[strcspn(cadeia_M6, "\n")] = '\0';
            resposta_M6 = metodo6(cadeia_M6);
            printf("%d\n", resposta_M6);

            break; */ 

        default:
            return 0;

    }

    return 0;
               



}


