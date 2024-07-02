#include <stdio.h>
#include "procedimentos.h"
int main() 
{
    int escolha;

    printf("Escolha um método (1-8): ");
    scanf("%d", &escolha);

    switch (escolha) {
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
        /*case 5:
            metodo5();
            break;*/
        case 6:
            metodo6();
            break;
        case 7:
            metodo7();
            break;
        case 8:
            metodo8();
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}