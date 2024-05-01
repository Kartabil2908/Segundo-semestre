/* PROGRAMA: "Exemplo000.c"
AUTOR: BERNARDO LADEIRA KARTABIL
VERSÃO: 1.5 ATUAL
DATA DA ÚLTIMA MODIFICAÇÃO: 22/02/2024
OBJETIVO: TESTAR E ANALISAR OS EXEMPLOS DE CÓDIGOS SIMPLES EM C OS QUAIS O PROFESSOR PASSOU.
*/

/* OBSERVAÇÃO IMPORTANTE:

Existem elementos iguais em diferentes exemplos, ou seja,
para não ficar poluído de comentários, não comentarei elementos recorrentes.
Então, os exemplos devem ser lidos de forma crescente para melhor compreensão.

*/

// ------------------------------------ EXEMPLO101 --------------------------------------------------------------
/*
#include <stdio.h> // Incluindo a biblioteca padrão <stdio.h>

int main ( ) // A função principal "main" não precisa de parâmetros, mas necessita de um retorno de um valor do tipo inteiro (int).
{
 printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" ); // Função "printf" é usada para printar algo na tela do terminal.
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );  // A função "getchar" coleta a informação de um caractere do teclado, no caso ela é utilizada para esperar/pausar a ação.

 return ( 0 ); // A função main precisa retornar um valor do tipo inteiro, no caso é 0.
}

// Saída Obtida: PRESSIONAR <Enter> PARA TERMINAR

*/



// ------------------------------------ EXEMPLO102 -----------------------------------------------------------
/*

#include <stdio.h>
#include <stdlib.h> // Biblioteca de funções frequentemente usadas nos códigos
int main ( )
{
 printf("TESTANDO O SYSTEM CLS"); // Esse printf não está aparecendo no terminal, ou seja, a função system está funcionando.
 system ( "cls" ); // (Windows) para limpar a tela
 printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );
 system ( "pause" ); // (Windows) Pausa o programa
 return ( EXIT_SUCCESS ); // Aparentemente o código identifica "EXIT_SUCCESS" como um retorno de "0" para a função main
} // fim do programa

// Saída Obtida: EXEMPLO102 - PRIMEIRO EXEMPLO EM C

*/


// ------------------------------------ EXEMPLO103 -------------------------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
 void clrscr ( ) { system ( "cls" ); }  // Cabeçalho do procedimento "clrscr", não retorna nada.

int main ( )
{
 clrscr ( ); // Uso do procedimento criado no cabeçalho
 printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" ); // para mudar de linha
 printf ( "MATRICULA: ______ ALUNO : __________________" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );

} // fim do programa

 /*Saída Obtida:
a
EXEMPLO103 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
PRESSIONAR <Enter> PARA TERMINAR.
*/


/*
// ------------------------------------ EXEMPLO104 ---------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
 printf ( "EXEMPLO104 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" ); // Pula uma linha
 printf ( "MATRICULA: ______ ALUNO : __________________" );
 printf ( "\n" );
 printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO104 - PRIMEIRO EXEMPLO EM C

MATRICULA: ______ ALUNO : __________________

PRESSIONAR <Enter> PARA TERMINAR.
*/


// ------------------------------------ EXEMPLO105 -------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
 printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // O %c serve como um """identificador""" de um tipo de valor, no caso, o valor é 'A', ou seja, um caractere ou símbolo
 printf ( "\nINTEIRO : %d", 10 ); // O %d é usado para valores sem parte fracionária
 printf ( "\nREAL : %f", 3.1415 ); // O %f é usado para valores com parte fracionária
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO105 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
CARACTERE : A
INTEIRO : 10
REAL : 3.1415
PRESSIONAR <Enter> PARA TERMINAR.
*/



// ------------------------------------ EXEMPLO106 -----------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 // Define um """"apelido""""" para o valor,ou seja, ao invés do valor ser 3.1415, será referenciado como PI.
int main ( )
{
 printf ( "EXEMPLO106 - PRIMEIRO EXEMPLO EM C " );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' );
 printf ( "\nINTEIRO : %d", 10 );
 printf ( "\nREAL : %f", PI ); // emprego de macro/ apelido/#define
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO106 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
CARACTERE : A
INTEIRO : 10
REAL : 3.1415
PRESSIONAR <Enter> PARA TERMINAR.
*/


// ------------------------------------ EXEMPLO107 -----------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{

 const float PI = 3.14; // define uma constante, mostrando seu nome e tipo
 printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' );
 printf ( "\nINTEIRO : %d", 10 );
 printf ( "\nREAL : %f" , PI ); // constante real
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO107 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
CARACTERE : A
INTEIRO : 10
REAL : 3.14
PRESSIONAR <Enter> PARA TERMINAR.
*/


// ------------------------------------ EXEMPLO108 -------------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
 const float PI = 3.14;

 float X = 10.01; // define uma variável do tipo float chamada "X" cujo valor inicial é 10.01
 printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' );
 printf ( "\nINTEIRO : %d", 10 );
 printf ( "\nREAL : %f", PI );
 printf ( "\nREAL : %f", X ); // variável real "X"
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO108 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
CARACTERE : A
INTEIRO : 10
REAL : 3.14
REAL : 10.01
PRESSIONAR <Enter> PARA TERMINAR.
*/




// ------------------------------------ EXEMPLO109 ---------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
 const float PI = 3.14;
 float X = 10.01;
 int I = 10; // define uma variável do tipo inteira chamada "I" cujo valor inicial é 10
 printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I ); // variável inteira "I". Note que foi usado %i para representar o int, porém muitas pessoas usam o %d.
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO109 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
CARACTERE : A
INTEIRO : 10
REAL : 3.14
REAL : 10.01
PRESSIONAR <Enter> PARA TERMINAR.
*/

/*
// ------------------------------------ EXEMPLO110 -----------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{

 const double PI = 3.14; // constante do tipo double, isto é, um tipo de "float", mas com dupla capacidade de "precisão".
 float X = 10.01;
 int I = 10;

 char N = '\n'; // Define uma variável do tipo char (caractere ou símbolo). Nesse caso é o "\n", ou seja, a variável pula 1 linha.
 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I ); // Observação interessante: Na função printf, a ordem a qual você coloca o "%"
 printf ( "%c%s%f" , N, "REAL : " , X );    // deve ser a mesma ordem depois da vírgula. "Cada um com seu parzinho"
 printf ( "%c%s%lf", N, "REAL : " , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*Saída Obtida:

EXEMPLO110 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
CARACTERE : A
INTEIRO : 10
REAL : 3.14
REAL : 10.01
PRESSIONAR <Enter> PARA TERMINAR.
*/


// ------------------------------------ EXEMPLO201 ------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR INTEIRO

 int X = 0;
 printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X ); // A função "scanf" serve para escanear uma entrada no teclado,além disso, o "%d" refere-se à um tipo de variável inteira a ser digitada.
                    // Observação: O símbolo "&" significa "endereço", ou seja, o valor inteiro está sendo guardado na variável "X" a qual tem um endereço.
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %d", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: 3

//Saída obtida:

/*EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO
FORNECER UM VALOR INTEIRO QUALQUER: 3
O VALOR DIGITADO FOI: 3
PRESSIONAR <Enter> PARA TERMINAR.*/
/*
// ------------------------------------ EXEMPLO202 -------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL

 double X = 0.0;
 printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %lf", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: 3.1415

//Saída obtida:

/*EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL
FORNECER UM VALOR REAL QUALQUER: 3.1415
O VALOR DIGITADO FOI: 3.1415
PRESSIONAR <Enter> PARA TERMINAR.*/



// ------------------------------------ EXEMPLO203 -------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR UM CARACTERE
 char X = '0'; // o zero, apesar de ser um número, é considerado,nesse caso, como caractere, pois é atribuído à uma variável do tipo "char"
 printf ( "EXEMPLO203 - LER E IMPRIMIR UM CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( );
 printf ( "\nO VALOR DIGITADO FOI: %c", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: A

//Saída obtida: A

*/
// ------------------------------------ EXEMPLO204 --------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
 char X [10]; // Criação de um vetor de 10 posições, a última posição é preenchida com /0
 printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" ); // o 10 seria o /0
 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", X ); // OBS.: NAO usar o (&) para caracteres !
 getchar( );
 printf ( "\nFOI DIGITADO: %s", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: ABCDEFGHIJKLMNOPQRSTUVWXYZ
// Saída obtida: ABCDEFGHIJKLMNOPQRSTUVWXYZ (Não sei o porquê consegui digitar mais de 9 caracteres)

*/
// ------------------------------------ EXEMPLO205----------------------------------------------
/*
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E SOMAR DOIS VALORES INTEIROS

 int X=0, Y=0, Z=0;
 printf ( "EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( );
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 Z = X + Y; // atribuindo a soma dos valores de X + Y à Z. Observação: As variáveis precisam ser do mesmo tipo.
 printf ( "\nA SOMA DOS DOIS = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: 30
//25

// Saída obtida:55

*/


// ------------------------------------ EXEMPLO206 ---------------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E SUBTRAIR DOIS VALORES REAIS
// VARIAVEIS:
 float X=0.0, Y=0.0, Z=0.0;
 printf ( "EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%f", &X );
 getchar( );
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%f", &Y );
 getchar( );
 Z = X - Y;
 printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: 3.5
//4.5

// Saída obtida:-1.00000000
*/



// ------------------------------------ EXEMPLO207 ----------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // para valores logicos (Verdadeiro/Falso. Sim/não)
int main ( )
{
// PROGRAMA PARA OPERAR VALORES LOGICOS
// VARIAVEIS:
 bool X=false, Y=false, Z=false; // atribuição de valores do tipo bool, ou seja, do tipo lógico.
 printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
 X = true;
 Y = false;
 Z = X || Y; // X ou Y ( || = ou)
 printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 Z = X && Y; // X e Y (&& = e)
 printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO208 ----------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
// VARIAVEIS:
 double D = 0.0, // Distancia // Terminar com "," na declaração de variável quer dizer que a próxima variável a ser declarada tem o mesmo tipo da anterior.
 T = 0.0, // Tempo. Observação: Não foi declarado o tipo da variável na mesma linha, pois já foi declarado na linha anterior
 V = 0.0; // Velocidade
 printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D ); // "%lf" porque a variável é do tipo "double"
 getchar( );
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); // limpar a entrada de dados
 V = D / T; // O "/" quer dizer divisão.
 printf ( "\nV = D / T = %lf%s", V, " m/s " );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO209 -------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para lidar com caracteres
int main ( )
{
// PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA
// CONSTANTE:
 const char SENHA[5] = "XXXX"; // uma constante com 5 do tipo char com 5 posições. Note que a última posição é \0.
// VARIAVEL:
 char S [10];
 printf ( "EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA" );
 printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
 scanf ( "%s", S ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 ); // dificuldade em entender o ':' e o '?'
// strcmp(S1,S2) compara S1 com S2
// igual a 0: S1 = S2 => 1 ( verdadeiro )
// diferente: S1 <> S2 => 0 ( falso )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( ( EXIT_SUCCESS ) );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO210 ---------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // para operacoes matematicas
int main ( )
{
// PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
// CONSTANTE:
 const double PI = 3.14;
// VARIAVEIS:
 double ARCO = 0.0,
 COSSENO = 0.0,
 SENO = 0.0,
 TANGENTE = 0.0;
 printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
 printf ( "\nFORNECER O VALOR DO SENO: " );
 scanf ( "%lf", &SENO );
 getchar( ); // limpar a entrada de dados
 COSSENO = sqrt( 1.0 - pow(SENO,2) ); // 'sqrt' é uma função para raiz quadrada e 'pow' é potenciação
 TANGENTE = SENO / COSSENO;
 ARCO = atan( TANGENTE );
 printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI) );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO301 ---------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO
// VARIAVEL:
 int X = 0;
 printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( );
 if ( X == 0 ) // se "X" for igual à 0
 printf ( "\nO VALOR DIGITADO FOI ZERO" );
 else // se não
 printf ( "\nO VALOR DIGITADO NAO FOI ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
/*
// ------------------------------------ EXEMPLO302 -------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
// VARIAVEL:
 float X = 0.0;
 printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 if( X != 0.0 ) // se X for diferente (!=) de 0.0
 printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO303 ----------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( );
 if( X >= '0' && X <= '9' ) // Se X for maior ou igual ao caractere '0' E X for menor ou igual ao '9'.
                            // Observação: O '&&' analisa binariamente, ou seja, só satisfará a condição se AMBOS forem verdadeiros
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO304 ------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( !( X >= '0' && X <= '9') ) // O '!' quer dizer o contrário, ou seja, se o que estiver dentro do parênteses for verdadeiro, será falso.
                                //Ex: !(Falso) ----> Verdadeiro
                                // !(Verdadeiro) ----> Falso
 {
 printf ( "\nNAO FOI DIGITADO UM ALGARISMO" );
 printf ( "\nFOI DIGITADO O CARACTERE: %c", X );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO305 ---------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS
// VARIAVEIS:
 int X=0, Y=0;
 printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 if( X == Y ) // Se 'X' for igual a 'Y'
 printf ( "\nDOIS VALORES IGUAIS" );
 else // se não
 {
 printf ( "\n%d", X );
 printf ( " DIFERENTE DE " );
 printf ( "%d", Y );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO306 ------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
// VARIAVEIS:
 double X=0.0, Y=0.0;
 printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%lf", &Y );
 getchar( ); // limpar a entrada de dados
 if( ! (X == Y) ) Se o NÃO X for igual à Y for Verdadeiro, ou seja, se X for diferente de Y
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }
 else // se não
 {
 printf ( "VALORES IGUAIS" );
 } // if VALORES DIFERENTES
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO307 --------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main ( )
{
// PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS
// VARIAVEIS:
 int X=0, Y=0;
 bool Z=false;
 printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 Z = (X == Y);
 if( Z ) // Se X for igual à Y
 printf ( "VALORES IGUAIS" );
 else
 printf ( "VALORES DIFERENTES" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO308 --------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E TESTAR UMA LETRA
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
 printf ( "\nFORNECER UMA LETRA QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= 'A' && X <= 'Z' ) // Cada caractere tem um número na tabela ASCII, ou seja, por isso está comparando caracteres com maior ou igual (>=)
 printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
 else
 if( X >= 'a' && X <= 'z' )
 printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
 else
 printf ( "NAO FOI DIGITADA UMA LETRA" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/

/*
// ------------------------------------ EXEMPLO309 --------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA COMPARAR CARACTERES < , = , >
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
 printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 switch( X ) // switch é tipo um cardápio de escolhas.
 {
 case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" ); // Caso o valor digitado for o '>', entre aqui
 break; // saia do cardápio
 case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );// Caso o valor digitado for o '=', entre aqui
 break;
 case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );// Caso o valor digitado for o '<', entre aqui
 break;
 default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 } // COMPARACAO DE X COM < , = , >
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO310 ---------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA IDENTIFICAR CARACTERES
// VARIAVEL
 char X = '0';
 printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 switch ( X ) // switch é tipo um cardápio de escolhas.Além disso, pode separar dessa maneira.
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
 break; // aqui executa a ação se a escolha for algum dos casos acima
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
 printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
 break; // aqui executa a ação se a escolha for algum dos casos acima.
 default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 } // IDENTIFICACAO DE UM CARACTERE
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*
// ------------------------------------ EXEMPLO401 -----------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
 printf ( "\n" ); // mudar de linha
 CONTADOR = 1;
 while ( CONTADOR <= 3 ) // Enquanto o CONTADOR for menor ou igual À 3, faça
 {
 printf ( "\n" ); // mudar de linha
 printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1; // Acrescenta +1 no contador
 } // ENQUANTO ( CONTADOR <= 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO402 ------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0, CONTADOR = 0;
 printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 CONTADOR = 1;
 while ( CONTADOR <= N ) // Enquanto o contador for menor ou igual à N, faça
 {
 printf ( "\n%d", CONTADOR );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= N )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO403 -----------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0;
 printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 while ( N > 0 ) // Enquanto N for maior que 0, faça
 {
 printf ( "\n%d", N );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 N = N - 1; // Decrementa 1 no N
 } // ENQUANTO N > 0
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO404 -------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1) // "For" é uma estrutura de repetição, mas é usado quando se sabe o intervalo de repetições
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 } // PARA CONTADOR EM [1:3]
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO405 -----------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 N = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ ) // CONTADOR++ é o mesmo que CONTADOR + 1
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d", X );
 } // PARA CONTADOR EM [1:N]
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO406 ----------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 CONTADOR = 1;
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 }
 while ( CONTADOR <= 3 ); // ATE' ( CONTADOR > 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO407 -------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &CONTADOR );
 getchar( ); // limpar a entrada de dados
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR - 1;
 }
 while ( CONTADOR > 0 ); // ATE' ( CONTADOR <= 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO408 ------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
 printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X != 0 ) // REPETIR
 {
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } // ENQUANTO X DIFERENTE DE ZERO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO409 --------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X == 0 ) // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } // ENQUANTO X IGUAL A ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/
/*
// ------------------------------------ EXEMPLO410 ---------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );
 do // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 }
 while ( X == 0 ); // ATE' X DIFERENTE DE ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
*/


//========================== TÉRMINO DA ATIVIDADE ============================================
