/*
Author: Bernardo Ladeira Kartabil
Identificação: 1449304
*/

//-------------------------------------------------------------------------------------------//

/*01.) Fazer um programa (0111) para:
- definir e ler um valor inteiro do teclado;
- supor que esse valor represente o lado de um quadrado,
 calcular e mostrar a área de outro quadrado com o lado três vezes maior.
 DICA: Usar constantes reais em expressões que envolvam valores reais.

#include <stdio.h>

int CalcularArea(int lado) // Função para calcular a área do quadrado com lado três vezes maior
{
    int ladoNovo = 0, areaNova = 0;
    ladoNovo = 3*lado;
    areaNova = ladoNovo*ladoNovo;
    
    return(areaNova);
    
} // fim da CalcularArea(int lado)

int main()
{
    int lado = 0;
    int area = 0;
    printf("Digite o valor do lado desse quadrado\n");
    scanf("%d", &lado);

    area = CalcularArea(lado);

    printf("A área do novo quadrado será %d\n", area);

    return (0);
} // fim da main()

*/

//-------------------------------------------------------------------------------------------//

/*
02.) Fazer um programa (0112) para:
- definir e ler um valor inteiro do teclado;
- supor que esse valor represente o lado de um quadrado,
 calcular e mostrar a área e o perímetro de um quadrado com a metade do tamanho do lado. 

#include <stdio.h>

float calcularArea(float lado)
{
    float area = 0;   
    lado = lado/2;
    area = lado*lado;
    return(area);
} // fim calcularArea(int lado)

float calcularPerimetro(float lado)
{
    float perimetro = 0;
    perimetro = (lado/2)*4;
    return(perimetro);
} // fim calcularPerimetro(int lado)

int main()
{

    float lado = 0, perimetro = 0, area = 0;
    
    
    printf("Digite o lado do quadrado\n");
    scanf("%f", &lado);

    perimetro = calcularPerimetro(lado);
    area = calcularArea(lado);

    printf("A área do quadrado com metade do lado é é %f e seu perímetro é %f\n", area, perimetro);
    
    return (0);
} // fim da main();

*/

//-------------------------------------------------------------------------------------------//


/*03.) Fazer um programa (0113) para:
- definir e ler dois valores inteiros do teclado;
- supor que esses dois valores representem lados de um retângulo,
 calcular e mostrar a área seis vezes maior.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valores = 3 e 5 */
/*
int calcularAreaNova(int, int);
#include <stdio.h>

int main(){

    int altura = 0, largura = 0, areaNova = 0;

    printf("Digite o valor da altura\n");
    scanf("%d", &altura);
    getchar();
    
    printf("Digite o valor da largura\n");
    scanf("%d", &largura);
    getchar();

    areaNova = calcularAreaNova(altura,largura);
    
    printf("A área 6 vezes maior será de %d", areaNova);

    return (0);
} // fecha a main

int calcularAreaNova(int altura, int largura){

    int area = 0;

    area = (altura*largura)*6;

    return(area);
    
} // fecha a calcularAreaNova

//Entrada: 3 e 5;
//Saída: 90;

*/

//-------------------------------------------------------------------------------------------//


/*04.) Fazer um programa (0114) para:
- definir e ler dois valores inteiros do teclado;
- supor que esses dois valores representem lados de um retângulo,
 calcular e mostrar a área e o perímetro de um retângulo com um quarto dos tamanhos dos lados.
Exemplo: valores = 3 e 5*/

/*
float calcularAreaNova(int, int);
float calcularPerimetroNovo(int, int);

#include <stdio.h>

int main(){

    int altura = 0, largura = 0; 
    float areaNova = 0, perimetroNovo = 0;

    printf("Digite o valor da altura\n");
    scanf("%d", &altura);
    getchar();
    
    printf("Digite o valor da largura\n");
    scanf("%d", &largura);
    getchar();

    areaNova = calcularAreaNova(altura,largura);
    perimetroNovo = calcularPerimetroNovo(altura,largura);

    printf("A área e o perímetro de um retângulo com 1/4 dos tamanhos dos lados são, respectivamente: %f e %f", areaNova, perimetroNovo);

        return (0);
} // fecha a main

float calcularAreaNova(int altura, int largura){

    float area = 0;
    
    altura = altura/4;
    largura = largura/4;

    area = altura*largura;

    return (area);
    
}// fecha a calcularAreaNova

float calcularPerimetroNovo(int altura, int largura){

    float perimetro = 0;
    
    altura = altura/4;
    largura = largura/4;

    perimetro = (altura*2) + (largura*2);

    return (perimetro);
    
}// fecha a calcularPerimetroNovo


//Entrada: 24 e 32;
//Saída: 48 e 28;

*/
//-------------------------------------------------------------------------------------------//

/* 05.) Fazer um programa (0115) para:
- definir e ler dois valores reais do teclado;
- supor que esses dois valores representem base e altura de um triângulo,
 calcular e mostrar a área de um triângulo com o dobro da altura do mesmo.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valores = 3 e 4 */

/*

#include <stdio.h>

float calcularAreaNova(float, float);

int main(){

    float base = 0, altura = 0, areaNova = 0;

    printf("Digite o valor da base:\n");
    scanf("%f", &base);

    printf("Digite o valor da altura:\n");
    scanf("%f", &altura);

    areaNova = calcularAreaNova(base,altura);

    printf("O valor da área do triângulo com o dobro da altura do mesmo é %f", areaNova);
    return (0);
    
}// fecha a main()

float calcularAreaNova(float base, float altura){

    float area = 0;

    altura = altura*2;

    area = (base*altura)/2;

    return (area);

} // fecha a função calcularAreaNova


//Entrada: 2.5 e 3;
//Saída: 7.5;
*/
//-------------------------------------------------------------------------------------------//

/*06.) Fazer um programa (0116) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o lado de um triângulo equilátero,
 calcular e mostrar a altura, área e o perímetro do triângulo com o triplo do lado.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valor = 5.0 */
/*

#include <stdio.h>
#define raizde3 1.732

float calcularAltura(float);
float calcularArea(float, float);


int main(){

    float lado = 0, areaNova = 0, perimetroNovo = 0, altura = 0;

    printf("Digite o valor do lado:\n");
    scanf("%f", &lado);
    getchar();

    lado = lado*3;

    altura = calcularAltura(lado);

    areaNova = calcularArea(lado, altura);

    perimetroNovo = lado*3;

    printf("A altura,área e o perímetro do triângulo com o tripo do seu lado são, respectivamente: %f %f %f\n", altura, areaNova, perimetroNovo);

    return (0);
    
} // fecha a main();

float calcularAltura(float base){

    float altura = 0;

    altura = (base*raizde3)/2;

    return (altura);
     
} // fecha a função calcularAltura

float calcularArea(float base, float altura){

    float area = 0;

    area = (base*altura)/2;

    return (area);
    
}// fecha a função calcularArea



//Entrada: 5;
/* Saída:

Altura: 12.990000
Área: 97.424995
Perímetro: 45.000000
*/

//-------------------------------------------------------------------------------------------//

/*07.) Fazer um programa (0117) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente a medida de lados de um cubo,
 calcular e mostrar o volume do sólido com cinco vezes a medida do lado.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valor = 5.0 */

/*

#include <stdio.h>

int main(){

    double lado = 0, volume = 0;

    printf("Digite a medida do lado do cubo:\n");
    scanf("%lf", &lado);

    lado = 5*lado; // mudando o tamanho do lado para 5 vezes.

    volume = lado*lado*lado; // calculando o volume

    printf("O volume do cubo cujo lado é 5 vezes a medida original é %lf", volume);

    return 0;
}

*/

//Entrada: 5;
//Saída: 15625;

//-------------------------------------------------------------------------------------------//

/* 08.) Fazer um programa (0118) para:
- definir e ler três valores reais do teclado;
- supor que esses valores correspondam ao comprimento, à largura e à altura
 de um paralelepípedo, respectivamente,
- calcular e mostrar o volume do sólido com um oitavo desses valores.
Exemplo: valores = 3.0, 4.0 e 5.0 */

/*

#include <stdio.h>

int main(){

    double comprimento = 0, largura = 0, altura = 0, volume = 0;

    printf("Digite a medida do comprimento do cubo:\n");
    scanf("%lf", &comprimento);

    printf("Digite a medida da largura do cubo:\n");
    scanf("%lf", &largura);

    printf("Digite a medida da altura do cubo:\n");
    scanf("%lf", &altura);

    volume = comprimento*largura*altura; // calculando o volume

    printf("O volume do cubo é %lf\n", volume);

    return 0;
}

*/


//-------------------------------------------------------------------------------------------//

/* 09.) Fazer um programa (0119) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o raio de um círculo,
 calcular e mostrar a área de um semicírculo com um sexto do raio.
 DICA: Na biblioteca <math.h> há definição da constante equivalente a PI (M_PI).
 Para certos compiladores será necessário incluir essa biblioteca na compilação:
 gcc -o programa program.c -lm
Exemplo: valor = 5.0 */

/*

#include <stdio.h>
#define PI 3,14

int main(){

    float raio = 0, area = 0;

    printf("Digite o valor do raio do círculo:\n");
    scanf("%f",  &raio);

    raio = raio/6;

    area = (PI*raio*raio)/2;

    printf("A área do semicírculo com um sexto do raio é: %f", area);
        
    return (0);
}

*/

//Entrada: 5;
//Saída: 4.861111;

//-------------------------------------------------------------------------------------------//

/*
    10.) Fazer um programa (0120) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o raio de uma esfera,
 calcular e mostrar o volume de uma esfera com três quartos do raio.
 DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valor = 5.0 */

/*
    
#include <stdio.h>
#define PI 3,14

int main(){

    float raio = 0, volume = 0;

    printf("Digite o valor do raio da esfera:\n");
    scanf("%f",  &raio);

    raio = (raio*3)/4;

    volume = (4/3)*(PI*raio*raio*raio);

    printf("O volume de uma esfera com três quartos do raio: %f\n", volume);
        
    return (0);
}

*/

//-------------------------------------------------------------------------------------------//
