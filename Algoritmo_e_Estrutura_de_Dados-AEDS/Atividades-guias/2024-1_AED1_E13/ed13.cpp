#include "pessoa.hpp"
#include "procedimentos.hpp"

int main()
{
    
    int opcao = 0;

    std::cout << "Digite uma opção." << std::endl;

    std::cin >> opcao;
    std::getchar();

    switch(opcao)
    {
        case 1:
            metodo_01();
        break;

        case 2:
            metodo_02();
        break;

        case 3:
            metodo_03();
        break;

         case 4:
            metodo_04();
        break;

        case 5:
            metodo_05();
        break;

        case 6:
            metodo_06();
        break;

        case 7:
            metodo_07();
        break;

        case 8:
            metodo_08();
        break;
        
        default: 
            std::cout << "Opção inválida" << std::endl;

        
    }
    


}