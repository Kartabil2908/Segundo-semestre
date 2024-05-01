// Essas atividades eu tive dificuldade, se você puder me explicar professor, eu agradeço


#include <stdio.h>
#include "procedimentos.h"

int main() {
    int opcao;
    
    printf("Digite um número de 1 a 10 para chamar um método: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            metodo1();
            break;
        case 2:
            metodo1();
            break;
        case 3:
            metodo3();
            break;
        /*case 4:
            metodo4();
            break; */
        case 5:
            metodo5();
            break;
        /*  case 6:
            metodo6(); // Está dando errado
            break;
        case 7:
            metodo7(); // não sei colocar a condição de múltiplo, está dando errado
            break;
        case 8:
            metodo8();
            break;
        case 9:
            metodo9();
            break;
        /*case 10:
            metodo10();
            break;*/  //Essas últimas eu tive dificuldade, vou te perguntar na aula!
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}