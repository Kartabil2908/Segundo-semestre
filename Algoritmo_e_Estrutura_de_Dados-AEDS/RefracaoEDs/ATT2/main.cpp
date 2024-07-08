#include "metodos.hpp"

int main()
{
    int opcao = 0;

    std::cin >> opcao;
    std::getchar();
    
    switch (opcao)
    {
    case 1:
        metodo_01();
        break;

    case 2:
        metodo_02();

    default:
        std::cout << "opcao inválida!" << std::endl;
        break;
    }

    return(0);
}