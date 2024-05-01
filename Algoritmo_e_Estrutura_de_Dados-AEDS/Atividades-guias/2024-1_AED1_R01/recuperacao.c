#include <stdio.h>
#include "procedimentos.h"

int main() {
    int escolha;

    printf("Digite um número de 1 a 10: ");
    scanf("%d", &escolha);
    getchar();

    switch (escolha) {
        case 1:
            metodo1();
            break;
        /*case 2:
            metodo2();
            break;*/
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
        /*case 7:
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
            break;*/
        default:
            printf("Número inválido!\n");
            break;
    }

    return 0;
}