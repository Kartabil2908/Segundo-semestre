/* PROGRAMA: "Exemplo000.c"
AUTOR: BERNARDO LADEIRA KARTABIL
VERS�O: 1.5 ATUAL
DATA DA �LTIMA MODIFICA��O: 22/02/2024
OBJETIVO: TESTAR E ANALISAR OS EXEMPLOS DE C�DIGOS SIMPLES EM C OS QUAIS O PROFESSOR PASSOU.
*/

/* OBSERVA��O IMPORTANTE:

Existem elementos iguais em diferentes exemplos, ou seja,
para n�o ficar polu�do de coment�rios, n�o comentarei elementos recorrentes.
Ent�o, os exemplos devem ser lidos de forma crescente para melhor compreens�o.

*/

// ------------------------------------ EXEMPLO101 --------------------------------------------------------------
/*
#include <stdio.h> // Incluindo a biblioteca padr�o <stdio.h>

int main ( ) // A fun��o principal "main" n�o precisa de par�metros, mas necessita de um retorno de um valor do tipo inteiro (int).
{
 printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" ); // Fun��o "printf" � usada para printar algo na tela do terminal.
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );  // A fun��o "getchar" coleta a informa��o de um caractere do teclado, no caso ela � utilizada para esperar/pausar a a��o.

 return ( 0 ); // A fun��o main precisa retornar um valor do tipo inteiro, no caso � 0.
}

// Sa�da Obtida: PRESSIONAR <Enter> PARA TERMINAR

*/



// ------------------------------------ EXEMPLO102 -----------------------------------------------------------
/*

#include <stdio.h>
#include <stdlib.h> // Biblioteca de fun��es frequentemente usadas nos c�digos
int main ( )
{
 printf("TESTANDO O SYSTEM CLS"); // Esse printf n�o est� aparecendo no terminal, ou seja, a fun��o system est� funcionando.
 system ( "cls" ); // (Windows) para limpar a tela
 printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );
 system ( "pause" ); // (Windows) Pausa o programa
 return ( EXIT_SUCCESS ); // Aparentemente o c�digo identifica "EXIT_SUCCESS" como um retorno de "0" para a fun��o main
} // fim do programa

// Sa�da Obtida: EXEMPLO102 - PRIMEIRO EXEMPLO EM C

*/


// ------------------------------------ EXEMPLO103 -------------------------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
 void clrscr ( ) { system ( "cls" ); }  // Cabe�alho do procedimento "clrscr", n�o retorna nada.

int main ( )
{
 clrscr ( ); // Uso do procedimento criado no cabe�alho
 printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" ); // para mudar de linha
 printf ( "MATRICULA: ______ ALUNO : __________________" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );

} // fim do programa

 /*Sa�da Obtida:
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

/*Sa�da Obtida:

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
 printf ( "\nCARACTERE : %c", 'A' ); // O %c serve como um """identificador""" de um tipo de valor, no caso, o valor � 'A', ou seja, um caractere ou s�mbolo
 printf ( "\nINTEIRO : %d", 10 ); // O %d � usado para valores sem parte fracion�ria
 printf ( "\nREAL : %f", 3.1415 ); // O %f � usado para valores com parte fracion�ria
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Sa�da Obtida:

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
#define PI 3.1415 // Define um """"apelido""""" para o valor,ou seja, ao inv�s do valor ser 3.1415, ser� referenciado como PI.
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

/*Sa�da Obtida:

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

/*Sa�da Obtida:

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

 float X = 10.01; // define uma vari�vel do tipo float chamada "X" cujo valor inicial � 10.01
 printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' );
 printf ( "\nINTEIRO : %d", 10 );
 printf ( "\nREAL : %f", PI );
 printf ( "\nREAL : %f", X ); // vari�vel real "X"
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*Sa�da Obtida:

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
 int I = 10; // define uma vari�vel do tipo inteira chamada "I" cujo valor inicial � 10
 printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I ); // vari�vel inteira "I". Note que foi usado %i para representar o int, por�m muitas pessoas usam o %d.
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} // fim do programa

/*Sa�da Obtida:

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

 const double PI = 3.14; // constante do tipo double, isto �, um tipo de "float", mas com dupla capacidade de "precis�o".
 float X = 10.01;
 int I = 10;

 char N = '\n'; // Define uma vari�vel do tipo char (caractere ou s�mbolo). Nesse caso � o "\n", ou seja, a vari�vel pula 1 linha.
 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I ); // Observa��o interessante: Na fun��o printf, a ordem a qual voc� coloca o "%"
 printf ( "%c%s%f" , N, "REAL : " , X );    // deve ser a mesma ordem depois da v�rgula. "Cada um com seu parzinho"
 printf ( "%c%s%lf", N, "REAL : " , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

/*Sa�da Obtida:

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
 scanf ( "%d", &X ); // A fun��o "scanf" serve para escanear uma entrada no teclado,al�m disso, o "%d" refere-se � um tipo de vari�vel inteira a ser digitada.
                    // Observa��o: O s�mbolo "&" significa "endere�o", ou seja, o valor inteiro est� sendo guardado na vari�vel "X" a qual tem um endere�o.
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %d", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: 3

//Sa�da obtida:

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

//Sa�da obtida:

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
 char X = '0'; // o zero, apesar de ser um n�mero, � considerado,nesse caso, como caractere, pois � atribu�do � uma vari�vel do tipo "char"
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

//Sa�da obtida: A

*/
// ------------------------------------ EXEMPLO204 --------------------------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
 char X [10]; // Cria��o de um vetor de 10 posi��es, a �ltima posi��o � preenchida com /0
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
// Sa�da obtida: ABCDEFGHIJKLMNOPQRSTUVWXYZ (N�o sei o porqu� consegui digitar mais de 9 caracteres)

*/
// ------------------------------------ EXEMPLO205----------------------------------------------
/*
#include <stdio.h> // para entradas e sa�das
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
 Z = X + Y; // atribuindo a soma dos valores de X + Y � Z. Observa��o: As vari�veis precisam ser do mesmo tipo.
 printf ( "\nA SOMA DOS DOIS = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa

//Entrada digitada: 30
//25

// Sa�da obtida:55

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

// Sa�da obtida:-1.00000000
*/



// ------------------------------------ EXEMPLO207 ----------------------------------
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // para valores logicos (Verdadeiro/Falso. Sim/n�o)
int main ( )
{
// PROGRAMA PARA OPERAR VALORES LOGICOS
// VARIAVEIS:
 bool X=false, Y=false, Z=false; // atribui��o de valores do tipo bool, ou seja, do tipo l�gico.
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
 double D = 0.0, // Distancia // Terminar com "," na declara��o de vari�vel quer dizer que a pr�xima vari�vel a ser declarada tem o mesmo tipo da anterior.
 T = 0.0, // Tempo. Observa��o: N�o foi declarado o tipo da vari�vel na mesma linha, pois j� foi declarado na linha anterior
 V = 0.0; // Velocidade
 printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D ); // "%lf" porque a vari�vel � do tipo "double"
 getchar( );
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); // limpar a entrada de dados
 V = D / T; // O "/" quer dizer divis�o.
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
 const char SENHA[5] = "XXXX"; // uma constante com 5 do tipo char com 5 posi��es. Note que a �ltima posi��o � \0.
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
 COSSENO = sqrt( 1.0 - pow(SENO,2) ); // 'sqrt' � uma fun��o para raiz quadrada e 'pow' � potencia��o
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
 if ( X == 0 ) // se "X" for igual � 0
 printf ( "\nO VALOR DIGITADO FOI ZERO" );
 else // se n�o
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
                            // Observa��o: O '&&' analisa binariamente, ou seja, s� satisfar� a condi��o se AMBOS forem verdadeiros
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
 if( !( X >= '0' && X <= '9') ) // O '!' quer dizer o contr�rio, ou seja, se o que estiver dentro do par�nteses for verdadeiro, ser� falso.
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
 else // se n�o
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
 if( ! (X == Y) ) Se o N�O X for igual � Y for Verdadeiro, ou seja, se X for diferente de Y
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }
 else // se n�o
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
 if( Z ) // Se X for igual � Y
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
 if( X >= 'A' && X <= 'Z' ) // Cada caractere tem um n�mero na tabela ASCII, ou seja, por isso est� comparando caracteres com maior ou igual (>=)
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
 switch( X ) // switch � tipo um card�pio de escolhas.
 {
 case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" ); // Caso o valor digitado for o '>', entre aqui
 break; // saia do card�pio
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
 switch ( X ) // switch � tipo um card�pio de escolhas.Al�m disso, pode separar dessa maneira.
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
 break; // aqui executa a a��o se a escolha for algum dos casos acima
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
 break; // aqui executa a a��o se a escolha for algum dos casos acima.
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
 while ( CONTADOR <= 3 ) // Enquanto o CONTADOR for menor ou igual � 3, fa�a
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
 while ( CONTADOR <= N ) // Enquanto o contador for menor ou igual � N, fa�a
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
 while ( N > 0 ) // Enquanto N for maior que 0, fa�a
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
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1) // "For" � uma estrutura de repeti��o, mas � usado quando se sabe o intervalo de repeti��es
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
 for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ ) // CONTADOR++ � o mesmo que CONTADOR + 1
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


//========================== T�RMINO DA ATIVIDADE ============================================
