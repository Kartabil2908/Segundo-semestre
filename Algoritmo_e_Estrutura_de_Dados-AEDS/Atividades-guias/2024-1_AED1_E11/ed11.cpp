#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "procedimentos.hpp"



int main(){

    int x;
    

 // mostrar opcoes
 std::cout << "Opcoes " << std::endl;
 std::cout << " 1 - gravar números inteiros de um array em um arquivo " << std::endl;
 std::cout << " 2 - procurar maior valor par em um arranjo, procurando de um arquivo; " << std::endl;
 std::cout << " 3 - menor valor ímpar múltiplo de 3 " << std::endl;
std::cout << " 4 - soma de valores entre posições" << std::endl;
 std::cout << " 5 - média dos valores entre as posições " << std::endl;
 std::cout << " 6 - verificar se todos os valores no arranjo são negativos" << std::endl;
 std::cout << " 7 - verificar se o arranjo está em ordem crescente" << std::endl;
 std::cout << " 8 - verificar se valor está dentro de um intervalo do arranjo " << std::endl;
 std::cout << " 9 - multiplicar intervalo de um arranjo por uma constante" << std::endl;
 std::cout << "10 - " << std::endl;
     
 // ler do teclado
 std::cout << std::endl << "Entrar com uma opcao: ";
 std::cin >> x;
    
 // escolher acao
 switch ( x )
 {
 case 1: method_01 ( ); break;
 case 2: method_02 ( ); break;
 case 3: method_03 ( ); break;
 case 4: method_04 ( ); break;
 case 5: method_05 ( ); break;
 case 6: method_06 ( ); break;
 case 7: method_07 ( ); break;
 case 8: method_08 ( ); break;
 case 9: method_09 ( ); break;
 case 10: method_10 ( ); break;
 default:
 std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
 } // end switch


    return(0);
} 