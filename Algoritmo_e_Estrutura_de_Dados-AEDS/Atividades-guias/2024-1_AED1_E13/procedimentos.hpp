#ifndef _PROCEDIMENTOS_HPP_
#define _PROCEDIMENTOS_HPP_
#include "pessoa.hpp"


void metodo_01()
{
    std::cout << "Método 1 iniciado!" << std::endl;
    Pessoa pessoa;
    pessoa.testarNome();
    
}

void metodo_02()
{
    std::cout << "Método 2 iniciado!" << std::endl;
    
    Pessoa contato1;
    contato1.testarNome();
    contato1.testarTelefone();
    
}

void metodo_03()
{
    std::cout << "Método 3 iniciado!" << std::endl;
    
    Pessoa contato3;
    contato3.testarNome();
    contato3.testarTelefone();
    contato3.testarTelefoneValido1();
}

void metodo_04()
{
    std::cout << "Método 4 iniciado!" << std::endl;
    
    Pessoa contato1;
    contato1.testarReadFromFile();
}

void metodo_05()
{
    std::cout << "Método 5 iniciado!" << std::endl;
    
    Pessoa contato5;
    contato5.testarNome();
    contato5.testarTelefone();
    std::string filename = "Pessoa5.txt";
    contato5.gravarPessoaArquivo(filename);

    
    
}

void metodo_06()
{
    std::cout << "Método 6 iniciado!" << std::endl;
    
    Pessoa contato6;
    
    contato6.testarNome();

    contato6.testarTelefoneValido1();
    contato6.testarTelefoneValido2();

    std::string filename = "Pessoa6.txt";
    
    contato6.gravarPessoaArquivo(filename);

    contato6.imprimirDados();
}

void metodo_07()
{
     std::cout << "Método 7 iniciado!" << std::endl;
    
     Pessoa contato1("João", "99999-1111", "98888-2222");

    contato1.testarNome();
    contato1.testarTelefoneValido1();
    contato1.testarTelefoneValido2();
    contato1.testarPhones();

    std::string filename = "contato7.txt";
    contato1.gravarPessoaArquivo(filename);
    contato1.imprimirDados();

    int n = contato1.phones();
    std::cout << "Número de telefones: " << n << std::endl;
    
}

void metodo_08()
{
    std::cout << "Método 8 iniciado!" << std::endl;
    
    Pessoa contato1("João", "99999-1111", "");

    contato1.testarNome();
    contato1.testarTelefoneValido1();
    contato1.testarPhones();

    contato1.testarSetPhone2();

    std::string filename = "contato8.txt";
    contato1.gravarPessoaArquivo(filename);
    contato1.imprimirDados();

    int n = contato1.phones();
    std::cout << "Número de telefones: " << n << std::endl;
}


#endif