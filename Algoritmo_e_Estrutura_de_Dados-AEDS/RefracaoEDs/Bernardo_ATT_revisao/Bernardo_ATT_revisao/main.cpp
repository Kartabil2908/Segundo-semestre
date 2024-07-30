
#include "planilha.hpp"
#include "procedimentos.hpp"
int main()
{
    planilha plan(2,4); // a quantidade de linhas influencia o número de alunos e a coluna o número de matérias.

    plan.print_planilha();

    plan.gravar_tabela();

    plan.preencher_tabela();

    plan.print_planilha();


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*int opcao;
    int materias;

    std::cout << "//--------------------PLANILHA DE ALUNOS-----------------//" << std::endl;
    do
    {
        std::cin >> opcao;
        std::getchar();

        switch(opcao)
        {
            case 1:
                metodo_01();
            break;

        }

    }while(opcao == 0);*/
    
    return(0);
}