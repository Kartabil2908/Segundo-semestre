#include <math.h>

void mostrarMultiplosDeSeis(int n) {
    printf("Múltiplos de 6 em ordem crescente até %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 6 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int lerQuantidade() {
    int quantidade;
    printf("Digite a quantidade inteira (n): ");
    scanf("%d", &quantidade);
    return quantidade;
}

void mostrarMultiplosDeTresECinco(int n) {
    printf("Múltiplos de 3 e 5 em ordem crescente até %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void mostrarPotenciasDeQuatro(int n) {
    printf("Potências de 4 em ordem decrescente até %d:\n", n);
    for (int i = n; i >= 0; i--) {
        printf("%d ", (int)pow(4, i));
    }
    printf("\n");
}


void mostrarDenominadoresMultiplosDeSete(int n) {
    printf("Valores crescentes nos denominadores múltiplos de 7 até %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void mostrarValoresParesDenominadores(int x, int n) {
    printf("Valores pares nos denominadores da sequência 1 a 1/%d:\n", x);
    for (int i = 2, j = 1; j <= n; i += 2, j++) {
        printf("%d 1/%d\n", i, x);
    }
}

int Funcao6(int quantidade) {
    int soma = 0;
    int valor = 3;
    int contador = 0;

    while (contador < quantidade) {
        if (valor % 3 == 0 && valor % 5 != 0) {
            soma += valor;
            contador++;
        }
        valor++;
    }

    return soma;
}

void Metodo6(int quantidade) {
    printf("Soma dos primeiros %d valores positivos, múltiplos de 3 e não múltiplos de 5: %d\n", quantidade, Funcao6(quantidade));
}

float Funcao7(int quantidade) {
    float soma = 0;
    int valor = 6;
    int contador = 0;

    while (contador < quantidade) {
        if (valor % 6 == 0 && valor % 5 != 0) {
            soma += 1.0 / valor;
            contador++;
        }
        valor++;
    }

    return soma;
}

void Metodo7(int quantidade) {
    printf("Soma dos inversos dos primeiros %d valores positivos, começando no valor 6, múltiplos de 6 e não múltiplos de 5: %.2f\n", quantidade, Funcao7(quantidade));
}

int somaDosPrimeirosNaturaisAPartirDeSeis(int quantidade) {
    int soma = 0;
    for (int i = 6; i < 6 + quantidade; i++) {
        soma += i;
    }
    return soma;
}

void testarSomaDosPrimeirosNaturaisAPartirDeSeis(int quantidade) {
    printf("Soma dos primeiros %d números naturais a partir do valor 6: %d\n", quantidade, somaDosPrimeirosNaturaisAPartirDeSeis(quantidade));
}

int Funcao9(int quantidade) {
    int soma = 0;
    for (int i = 6; i < 6 + quantidade; i++) {
        soma += i * i;
    }
    return soma;
}

void Metodo9(int quantidade) {
    printf("Soma dos quadrados da adição dos primeiros %d números naturais a partir do valor 6: %d\n", quantidade, somaDosQuadradosDaAdicaoDosNaturaisAPartirDeSeis(quantidade));
}