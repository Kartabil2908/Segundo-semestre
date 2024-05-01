#include <stdio.h>
#include 'procedimentos.h'

int main() {
    int quantidade = 0;

    int escolha;

    printf("Escolha um metodo (1-10): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            quantidade = lerQuantidade();
            mostrarMultiplosDeSeis(quantidade);
            break;
        
        case 2:
             
                quantidade = lerQuantidade();
                mostrarMultiplosDeTresECinco(quantidade);
                break;
        
        case 3:
                quantidade = lerQuantidade();
                mostrarPotenciasDeQuatro(quantidade);
                break;
        
        case 4:
                quantidade = lerQuantidade();
                mostrarDenominadoresMultiplosDeSete(quantidade);
            break;
        
        case 5:
                int x = 0;
                printf("Digite o valor real (x): ");
                scanf("%d", &x);
                quantidade = lerQuantidade();
                mostrarValoresParesDenominadores(x, quantidade);
            break;
        
        case 6:
                quantidade = lerQuantidade();
                Metodo6(quantidade);
            break;
        
        case 7:
                quantidade = lerQuantidade();
                Funcao7(quantidade);
            break;
        
        case 8:
                quantidade = lerQuantidade();
                testarSomaDosPrimeirosNaturaisAPartirDeSeis(quantidade);
            break;
        
        case 9:
                quantidade = lerQuantidade();
                Metodo9(quantidade);
            break;
        default:
            printf("Metodo invalido\n");
            break;
    }

    return 0;
}