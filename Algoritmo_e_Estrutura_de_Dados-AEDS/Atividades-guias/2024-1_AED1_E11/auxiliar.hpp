#ifndef _AUXILIAR_HPP_
#define _AUXILIAR_HPP_

#include <iostream>
#include <string>
#include <fstream>

class Array
{

    private: 
    int tamanho;
    int *data;

    public:

    Array (int n) // construtor
    {
        tamanho = 0;
        data = nullptr;

        if (n > 0)
        {
            tamanho = n;
            data = new int [tamanho];
        }
    }

    // métodos 
    void set (int valor, int posicao)
    {
        if(0 <= posicao && posicao <= tamanho)
        {
            data[posicao] = valor;
        }
        
    }


    int get (int posicao)
    {
        int valor = 0; 
        
        if(0 <= posicao && posicao <= tamanho)
        {
            valor = data[posicao];
        }
        return (valor);
    }

  

    void print_int_array()
    {
        for(int i = 0; i < this->tamanho; i++)
        {
            std::cout << this->data[i] << std::endl; 
        }
        
    }

    void read_int_array_file(std::string& nomeArquivo)
    {
        int y = 0, i = 0;
        
        std::ifstream arquivo;
        arquivo.open(nomeArquivo);

        while(!arquivo.eof()){
            arquivo >> this->data[i];
            i++;
        }
    }

    void procurarMaiorValorPar( int numLinhasDoArq)
    {
        int maiorPar = 0;
        int dado = 0;
        
        for(int i = 0; i < numLinhasDoArq; i++)
        {
            dado = this->get(i);
            
            if(dado > maiorPar && dado%2 == 0)
            {
                maiorPar = dado;
                std::cout<< dado << std::endl;
            }
        
        }

        std::cout << "O maior valor par do arranjo é " << maiorPar << std::endl;
    }

    int searchFirstOddx3()
    {
        int menorImpar;
        bool encontrado = false;

        for (int i = 0; i < tamanho; i++)
        {
            int valor = get(i);
            if (valor % 2 != 0 && valor % 3 == 0) // verificar se é ímpar e múltiplo de 3
            { 
                if (!encontrado)
                {
                    menorImpar = valor;
                    encontrado = true;
                } 
                else if (valor < menorImpar)
                {
                menorImpar = valor;
                }
            }
        }

        if (encontrado)
        {
            return menorImpar;
        } else
        {
            return -1; // retorna -1 se não encontrar nenhum valor ímpar múltiplo de 3
        }
    }

    int addInterval(int inicio, int fim)
    {
        int soma = 0;

        if (inicio < 0 || fim < 0 || inicio >= tamanho || fim >= tamanho)
        {
            std::cerr << "Erro: Posição inválida" << std::endl; // std::cerr é bom para mostrar erro //
            return -1;
        }

        if (inicio > fim)
        {
            std::cerr << "Erro: Posição de início maior que a posição de fim" << std::endl;
            return -1;
        }

        for (int i = inicio; i <= fim; i++)
        {
            soma = soma + get(i);
        }

        return soma;
    }

    double calcularMediaIntervalo(int inicio, int fim)
    {
        int soma = 0;
        int count = 0;

        if (inicio < 0 || fim < 0 || inicio >= tamanho || fim >= tamanho)
        {
            std::cerr << "Erro: Posição inválida" << std::endl;
            return -1.0;
        }

        if (inicio > fim)
        {
            std::cerr << "Erro: Posição de início maior que a posição de fim" << std::endl;
            return -1.0;
        }

        for (int i = inicio; i <= fim; i++)
        {
            soma = soma + get(i);
            count++;
        }

        if (count == 0) {
            std::cerr << "Erro: Intervalo vazio" << std::endl;
            return -1.0;
        }

        return (double)soma / count;
    }

    bool verificarNegativos()
    {
        for (int i = 0; i < tamanho; i++)
        {
            if (get(i) >= 0) 
            {
                return false;
            }
        }
        return true;
    }

    bool verificarOrdemCrescente()
    {
        for (int i = 0; i < tamanho - 1; i++)
        {
            if (get(i) > get(i + 1))
            {
                return false;
            }
        }
        return true;
    }

    bool procurarNoIntervalo(int valor, int inicio, int fim)
    {
        for (int i = inicio; i <= fim; i++)
        {
            if (get(i) == valor)
            {
                return true;
            }
        }
        return false;
    }

    Array escalar(int constante, int inicio, int fim)
    {
        Array novo(tamanho); // criar um novo arranjo com o mesmo tamanho
        
        for (int i = 0; i < tamanho; i++)
        {
            if (i >= inicio && i <= fim)
            {
                novo.set(get(i) * constante,i); 
            } 
            else 
            {
                 novo.set(get(i),i); // copiar os valores fora do intervalo
            }
        }
        return novo;
    }
    
    void Decrescente() {
    for (int i = 0; i < this->tamanho; i++) {
        for (int j = i + 1; j < this->tamanho; j++) {
            if (this->get(i) < this->get(j)) {
                int temp = this->get(i);
                this->set(this->get(j), i);
                this->set(temp, j);
            }
        }
    }
}

};
   

#endif