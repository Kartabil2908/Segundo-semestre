#ifndef _PROCEDIMENTOS_HPP_
#define _PROCEDIMENTOS_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "auxiliar.hpp"

int lerNumLinhasArq(std::string& nomeArquivo)
{
    int contador = 0;
    std::ifstream file(nomeArquivo);
    std::string linha;

    while(std::getline(file,linha))
    {
        contador++;
    }
    
    return (contador);
}


void method_01() // gravar números inteiros de um array em um arquivo
{
    int n = 0;
    int linhas = 0;
    std::ofstream arquivo;

    std::cout << "Digite a quantidade que será lida:" << std::endl;
    std::cin >> n;
    getchar();

    Array arr = Array(n);
    
    // preenchendo o array com números aleatórios //
    for(int i = 0; i < n; i++){

        arr.set(std::rand(),i);
    }
    // printando o array
    arr.print_int_array();
    std::cout << std::endl;

    //abrindo o arquivo

    arquivo.open("ARQUIVO_M1");
    
    // gravando no arquivo    
    int y = 0;

    for(int i = 0; i < n; i++)
    {
        y = arr.get(i);
        arquivo << y << std::endl;
    }

    arquivo.close();
    
    // fechando o arquivo 
    arquivo.close();

}

void method_02() // procurar maior valor par em um arranjo, procurando de um arquivo;
{
    int linhas = 0;

    std::string nomeArquivo = "ARQUIVO_M1";
    std::ifstream arquivo;

    linhas = lerNumLinhasArq(nomeArquivo); // lendo a qtd de linhas
    Array arr = Array(linhas); // criando o array;

    Array arrM2 = Array(linhas); // criando o array;

    arrM2.read_int_array_file(nomeArquivo);
    arrM2.print_int_array();

    // procurando maior valor par //

    arrM2.procurarMaiorValorPar(linhas);

}

void method_03()
{
    std::string nomeArquivo = "ARQUIVO_M1";
    
    Array arranjo(10); // criar um arranjo com 10 elementos
    
    arranjo.read_int_array_file(nomeArquivo); 
    
    int menor = arranjo.searchFirstOddx3();
    
    std::cout << "O menor valor ímpar múltiplo de 3 é " << menor << std::endl;
    
}

void method_04()
{
    Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    
    arranjo.read_int_array_file(nomeArquivo);
    
    int inicio = 2;
    int fim = 5;
    
    int soma = arranjo.addInterval(inicio, fim);
    
    std::cout << "A soma dos valores entre as posições " << inicio << " e " << fim << " é " << soma << std::endl;
    
}


void method_05()
{
    Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    arranjo.read_int_array_file(nomeArquivo);
    
    int inicio = 2;
    int fim = 5;
    
    double media = arranjo.calcularMediaIntervalo(inicio, fim);
    
    std::cout << "A média dos valores entre as posições " << inicio << " e " << fim << " é " << media << std::endl;
    
}

void method_06()
{
    Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    
    arranjo.read_int_array_file(nomeArquivo);
    bool teste = arranjo.verificarNegativos();
    
    if (teste) {
        std::cout << "Todos os valores no arranjo são negativos." << std::endl;
    } else {
        std::cout << "todos os valores no arranjo são positivos." << std::endl;
    }
    
}

void method_07()
{
    Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    
    arranjo.read_int_array_file(nomeArquivo);
    
    bool ordenado = arranjo.verificarOrdemCrescente();
    
    if (ordenado)
    {
        std::cout << "O arranjo está ordenado em ordem crescente." << std::endl;
    } else {
        std::cout << "O arranjo não está ordenado em ordem crescente." << std::endl;
    }
    
}

void method_08()
{
    Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    
    arranjo.read_int_array_file(nomeArquivo);

    int procurado;
    std::cout << "Digite um valor inteiro para ser procurado: ";
    std::cin >> procurado;

    int inicio, fim;
    std::cout << "Digite a posição de início da busca: ";
    std::cin >> inicio;
    std::cout << "Digite a posição de fim da busca: ";
    std::cin >> fim;

    bool existe = arranjo.procurarNoIntervalo(procurado, inicio, fim);
    
    if (existe)
    {
        std::cout << "O valor " << procurado << " existe no arranjo entre as posições " << inicio << " e " << fim << std::endl;
        
    }
    else 
    {
        std::cout << "O valor " << procurado << " não existe no arranjo entre as posições " << inicio << " e " << fim << std::endl;
        
    }
}




void method_09()
{
     Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    
    arranjo.read_int_array_file(nomeArquivo);

    int constante;
    std::cout << "Digite um valor inteiro para a constante: ";
    std::cin >> constante;

    int inicio, fim;
    std::cout << "Digite a posição de início da escala: ";
    std::cin >> inicio;
    std::cout << "Digite a posição de fim da escala: ";
    std::cin >> fim;

    Array novo = arranjo.escalar(constante, inicio, fim);
    std::cout << "Novo arranjo escalado: ";
    novo.print_int_array();
    
}


void method_10()
{
    Array arranjo(10);
    std::string nomeArquivo = "ARQUIVO_M1";
    
    arranjo.read_int_array_file(nomeArquivo);

    std::cout << "Arranjo original: ";
    arranjo.print_int_array();

    arranjo.Decrescente();
    std::cout << "Arranjo ordenado: ";
    arranjo.print_int_array();
}
#endif