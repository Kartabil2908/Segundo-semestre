#ifndef _PLANILHA_HPP_
#define _PLANILHA_HPP_

#include <iostream>
#include <string>
#include <fstream>

class planilha
{
    private:

    int linha;
    int coluna;
    int **data;

    protected:

    std::string *titles;
    std::string *matricula;
    int *ID;

    public:


    planilha()
    {
        this->linha = 0;
        this->coluna = 0;
        this->ID = nullptr;
        this->data = nullptr;
    }




    planilha (int linha, int coluna)
    {
        // MELHOR TESTAR SE VALORES VALIDOS ...
        this->linha = linha;
        this->coluna = coluna;

        // ... POIS PODEM TRAZER PROBLEMAS AQUI
        ID = new int[linha];
        data = new int*[linha];
        titles = new std::string[coluna];
        matricula = new std::string[linha];

        std:: cout << "Digite os nomes das matérias - 4 letras" << std::endl;

        for(int i = 0; i < coluna; i++)
        {

            this->titles[i] = set_materia();
            
        }
        

        for(int i = 0; i < linha; i++)
        {
            data[i] = new int[coluna];
            this->ID[i] = i;

            this->matricula[i] = this->set_matricula();

        }

        this->DefinirValorPadrao(0);
    
    }

    void DefinirValorPadrao(int n)
    {
        for(int i = 0; i < this->linha; i++)
        {
            for(int j = 0; j < this->coluna; j++)
            {
                this->data[i][j] = n;
            }
        }
    }

    void print_planilha()
    {
        std::cout << "// ----------------------------------------------------------- //" << std::endl;

        // ---- PRINTANDO CABEÇALHO ---- //
        std:: cout << "Aluno";
        std:: cout << "\tID";

        for (int i = 0; i < coluna; i++)
        {
            std::cout << "\t" << this->titles[i];
        }
        std::cout << std::endl;
        // ---- PRINTANDO CABEÇALHO ---- //



        // ---- PRINTANDO DADOS ---- //
        for(int i = 0; i < this->linha; i++)
        {
            std:: cout << this->matricula[i];
            std:: cout << "\t" << this->ID[i];

            for(int j = 0; j < this-> coluna; j++)
            {
                std:: cout << "\t" << this->data[i][j];
            }
            std:: cout << std::endl;
        }
         // ---- PRINTANDO DADOS ---- //

        std::cout << "// ----------------------------------------------------------- //" << std::endl;
    }


    
    std::string set_matricula()
    {
        std::string a;
        int flag = 0;

        do{
            std::cout << "Digite a matrícula do aluno - 6 dígitos:" << std::endl;
            std::cin >> a;
            std::getchar();

            if(a.length() != 6)
            {
                std::cout << "A matrícula não possuí 6 dígitos" << std::endl;

//            }else( flag = 1);
            }else  flag = 1;  // MELHOR ASSIM

        }while(flag == 0);

        return(a);
    }


    std::string set_materia()
    {
        std::string a;
        int flag = 0;

        do{
            std::cin >> a;
            std::getchar();

            if(a.length() != 4)
            {
                std::cout << "A matéria não possuí 4 letras" << std::endl;

//            }else( flag = 1);
            }else  flag = 1;  // MELHOR ASSIM

        }while(flag == 0);

        return(a);
    }



    void preencher_tabela()
    {
        for(int i = 0; i < this->linha; i++)
        {
            for(int j = 0; j < this->coluna; j++)
            {
                std::cout << "Digite a nota do aluno com matrícula " <<this->matricula[i] << " na matéria " << this -> titles[j] << std::endl;
                std::cin >> this->data[i][j];
                std::getchar();

            }
        }

        this->gravar_tabela();
    }

    void gravar_tabela()
    {
        std::string filename = "TABELA.TXT";
        std::ofstream arq;

        arq.open(filename);

        arq << "// ----------------------------------------------------------- //" << std::endl;

        // ---- PRINTANDO CABEÇALHO ---- //
        arq << "Aluno";
        arq << "\tID";

        for (int i = 0; i < coluna; i++)
        {
            arq << "\t" << this->titles[i];
        }
        arq << std::endl;
        // ---- PRINTANDO CABEÇALHO ---- //



        // ---- PRINTANDO DADOS ---- //
        for(int i = 0; i < this->linha; i++)
        {
            arq << this->matricula[i] << "\t";
            arq << this->ID[i];

            for(int j = 0; j < this-> coluna; j++)
            {
                arq << "\t" << this->data[i][j] << "\t";
            }
            arq << std::endl;
        }
         // ---- PRINTANDO DADOS ---- //

        arq << "// ----------------------------------------------------------- //" << std::endl;

        arq.close();

    }

    void adicionar_aluno()
    {
        this->linha = this->linha + 1;

        data = new int*[this->linha];

        this->matricula = new std::string[this->linha];

        matricula[this->linha] = this->set_matricula();

        for(int i = 0; i < linha; i ++)
        {
            if(i = linha - 1)
            {
                for(int j = 0; j < coluna; j++)
                {
                    std::cout << "Digite a nota do aluno com matrícula " <<this->matricula[i] << " na matéria " << this -> titles[j] << std::endl; 
                    std::cin >> this->data[i][j];
                    std::getchar();   
                }
            }
        }
    }


    
};
#endif