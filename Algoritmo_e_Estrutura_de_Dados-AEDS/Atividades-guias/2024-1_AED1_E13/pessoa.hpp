#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_
#include <iostream>
#include <string>
#include <fstream>

class Pessoa {

private:

    std::string nome;
    std::string telefone;
    std::string telefone2;
    int numTelefones;

  
    bool isValidPhone(const std::string& phone) {
        for (char c : phone) {
            if (!isdigit(c) && c != '-') {
                return false; 
            }
        }
        return true; 
    }

public:

    Pessoa() : nome(""), telefone(""), telefone2(""), numTelefones(0) {}

    Pessoa(const std::string& n, const std::string& t1, const std::string& t2) 
        : nome(n), telefone(t1), telefone2(t2), numTelefones(2) {}

    void setNome() {
        std::cout << "Digite o nome: ";
        std::getline(std::cin, nome);
    }

    void testarNome() {
        setNome();
        if (!nome.empty()) {
            std::cout << "Nome atribuído com sucesso: " << nome << std::endl;
        } else {
            std::cout << "Erro: nome não pode ser vazio!" << std::endl;
        }
    }

    void readPhone1(const std::string& prompt) {
        std::cout << prompt;
        std::getline(std::cin, telefone);
        numTelefones = 1; 
    }

    void readPhone2(const std::string& prompt) {
        std::cout << prompt;
        std::getline(std::cin, telefone2);
        numTelefones = 2; 
    }

    int phones() { 
        return numTelefones;
    }

    void testarTelefone() {
        readPhone1("Fone 1: ");
        if (!telefone.empty()) {
            std::cout << "Telefone 1 atribuído com sucesso: " << telefone << std::endl;
        } else {
            std::cout << "Erro: telefone 1 não pode ser vazio!" << std::endl;
        }
    }

    void testarTelefone2() {
        readPhone2("Fone 2: ");
        if (!telefone2.empty()) {
            std::cout << "Telefone 2 atribuído com sucesso: " << telefone2 << std::endl;
        } else {
            std::cout << "Erro: telefone 2 não pode ser vazio!" << std::endl;
        }
    }

    void testarTelefoneValido1() {
        readPhone1("Fone 1: ");
        if (isValidPhone(telefone)) {
            std::cout << "Telefone 1 válido!" << std::endl;
        } else {
            std::cout << "Erro: telefone 1 inválido!" << std::endl;
        }
    }

    void testarTelefoneValido2() {
        readPhone2("Fone 2: ");
        if (isValidPhone(telefone2)) {
            std::cout << "Telefone 2 válido!" << std::endl;
        } else {
            std::cout << "Erro: telefone 2 inválido!" << std::endl;
        }
    }

    void testarPhones() { 
        std::cout << "Número de telefones: " << phones() << std::endl;
    }

    void readFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::getline(file, nome);
            std::getline(file, telefone);
            std::getline(file, telefone2);
            file.close();
            std::cout << "Dados lidos do arquivo com sucesso!" << std::endl;
        } else {
            std::cout << "Erro: não foi possível abrir o arquivo!" << std::endl;
        }
    }

    void testarReadFromFile() {
        readFromFile("Pessoa1.txt");
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Telefone 1: " << telefone << std::endl;
        std::cout << "Telefone 2: " << telefone2 << std::endl;
    }

    void gravarPessoaArquivo(std::string &filename)
    {
        std::ofstream arquivo;

        arquivo.open(filename);

        arquivo << this->nome << std::endl;
        arquivo << this->telefone << std::endl;
        arquivo << this->telefone2;
        
    }

    void imprimirDados() 
    {
        std::cout << "Nome: " << this->nome << std::endl;
        std::cout << "Telefone 1: " << this->telefone << std::endl;
        std::cout << "Telefone 2: " <<this->telefone2 << std::endl;
    }

    void testarContato() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Telefone 1: " << telefone << std::endl;
        std::cout << "Telefone 2: " << telefone2 << std::endl;
    }

void setPhone2(const std::string& phone) {
        if (numTelefones == 1) {
            std::cout << "Você deseja acrescentar outro telefone? (s/n): ";
            char resp;
            std::cin >> resp;
            if (resp == 's' || resp == 'S') {
                telefone2 = phone;
                numTelefones = 2;
                std::cout << "Telefone 2 atribuído com sucesso!" << std::endl;
            } else {
                std::cout << "Ok, telefone 2 não será atribuído." << std::endl;
            }
        } else {
            telefone2 = phone;
            std::cout << "Telefone 2 atribuído com sucesso!" << std::endl;
        }
    }

    void testarSetPhone2() {
        setPhone2("97777-3333");
        std::cout << "Telefone 2: " << telefone2 << std::endl;
        std::cout << "Número de telefones: " << phones() << std::endl;
    }

    
};

#endif
