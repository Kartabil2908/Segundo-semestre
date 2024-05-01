#include <float.h>

int ler_qttd(){

    int qttd = 0;

    printf("Digite o a quantidade de números que serão lidos:\n");
    scanf("%d",&qttd);
    getchar();

    return (qttd);
    
}

int ler_inteiro() {
    int n;
    printf("Digite o número de valores (n): ");
    scanf("%d", &n);
    return n;
}


void ler_valores(int n, float valores[]) {
    printf("Digite os %d valores reais um por vez:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }
}

float calcular_media_intervalo(float valores[], int n, float inferior, float superior) {
    float soma = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (valores[i] >= inferior && valores[i] <= superior) {
            soma += valores[i];
            count++;
        }
    }

    if (count > 0) {
        return soma / count;
    } else {
        return 0; 
    }
}

float maior_entre_tres(float a, float b, float c) {
    float max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}


int soma_divisores_impares(int valor)
{
    int soma = 0;
    
    for (int divisor = 1; divisor <= valor; divisor = divisor + 2)
    {
        if (valor % divisor == 0)
        {
            soma = soma + divisor;
        }
    }
    
    return soma;
}

/*int verificar_primo(int valor)
{

    if(valor == 2)
    {

        return (1);
    }else if(valor
    

}*/

int verificar_exe3(char c)
{
    switch(c)
    
    {

        case '+': case '-': case '*': case '/':  // aritmético
        case '<': case '>': case '=':
            return (1);
        break;

        case ' ': case '\t':
        case ';': case ',': case '(': case ')': // separadores
            return (2);
        break;


        case '!':
        case '&': case '|':
            return (3);
        break;

        default:

        return (4);
    }


    
}


int testar_letra(char letra){

    if (letra > 'A' && letra < 'Z')
    {
        return (1);
    }
    if (letra > 'a' && letra < 'z')
    {
        return (2);
    }

}


int pertence_intervalo(int numero, int a, int b) {
    return (numero >= a && numero < b);
}


double cubo_inverso_impar(int x) {
    if (x == 0) {
        return 0.0; // Evita divisão por zero
    }
    if (x % 2 != 0) {
        double inverso_cubo = 1.0 / (double)x;
        return inverso_cubo * inverso_cubo * inverso_cubo;
    } else {
        return 0.0; 
    }
}


void soma_cubos(int a, int b) {
    int valor;
    double soma = 0.0;

    printf("Digite os valores inteiros (finalize com -1):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == -1) {
            break; 
        }

        if (pertence_intervalo(valor, a, b)) {
            double cubo_inverso = cubo_inverso_impar(valor);
            soma += cubo_inverso;
        }
    }

    printf("A soma dos cubos dos inversos dos ímpares no intervalo [%d, %d) é: %.6f\n", a, b, soma);
}


void metodo1()
{
    int n = 0, resposta = 0, numero = 0;

    n = ler_qttd();
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numero);
        getchar();

        resposta = soma_divisores_impares(numero);
        printf("A soma dos divisores ímpares desse número é: %d\n" , resposta);
        
    }


}

/*void metodo2()
{

    int n = 0;
    n = ler_qttd();
    resposta = 0, numero = 0;

     for(int i = 0; i < n; i++)
    {
        scanf("%d", &numero);
        getchar();

        resposta = verificar_primo(numero);
        
    }


}*/




void metodo3()
{
    char cadeia[100];
    int resposta = 0;

    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[sizeof(cadeia) - 1] = '\0';
    printf("%s", cadeia);

    for(int i = 0; i < sizeof(cadeia); i++){
        
       resposta = verificar_exe3(cadeia[i]);

        if( resposta == 1){

            printf("é um caractere aritmético\n");
        }
        else if(resposta == 2)
        {
            printf("é um caractere separador\n");
            
        }else if(resposta == 3)
        {
            printf("é um caractere lógico\n");
            
        }
    }


}

void metodo4()
{

    char cadeia[100];
    int resposta = 0;

    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[sizeof(cadeia) - 1] = '\0';
    printf("%s", cadeia);

    for(int i = 0; i < sizeof(cadeia); i++)
    {

       if((cadeia[i] > 'A' && cadeia[i] < 'Z') || (cadeia[i] > 'a' && cadeia[i] < 'z')){

           resposta = testar_letra(cadeia[i]);

           if(resposta == 1)
           {
               printf("O caractere número %d é Maiúsculo\n", i+1); 
           }
           if(resposta == 2)
           {
               printf("O caractere número %d é Minúsculo\n", i+1); 
           }

       }
       else
       {
           resposta = verificar_exe3(cadeia[i]);

            if( resposta == 1){

                printf("é um caractere aritmético\n");
            }
            else if(resposta == 2)
            {
                printf("é um caractere separador\n");
            
            }
            else if(resposta == 3)
            {
                printf("é um caractere lógico\n");
            
            }
       }
    }
    
}




void metodo5()
{
     int n;
    float valores[100]; 


    n = ler_inteiro();


    ler_valores(n, valores);

    
    float media1 = calcular_media_intervalo(valores, n, -FLT_MAX, -17.25);


    float media2 = calcular_media_intervalo(valores, n, -17.25, 93.75);


    float media3 = calcular_media_intervalo(valores, n, 93.75, FLT_MAX); // esse FLT_MAX é o tamanho max do float


    float maior_media = maior_entre_tres(media1, media2, media3);


    printf("Média dos valores menores que -17.25: %.2f\n", media1);
    printf("Média dos valores entre -17.25 e 93.75: %.2f\n", media2);
    printf("Média dos valores maiores que 93.75: %.2f\n", media3);
    printf("A maior média entre todos os intervalos é: %.2f\n", maior_media);

}


void metodo6()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    soma_cubos(a, b);

    
}




    
    
