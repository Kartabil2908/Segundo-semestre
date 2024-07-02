#include "procedimentos.hpp"
#include "queue.hpp"
#include "stack.hpp"

int main() {
    int escolha;

    std::cout << "Escolha uma opção (1-10): ";
    std::cin >> escolha;

    switch (escolha) {
        case 1:
            std::cout << "Você escolheu a opção 1!" << std::endl;
            metodo_01();
            break;
        case 2:
            std::cout << "Você escolheu a opção 2!" << std::endl;
            metodo_02();
            break;
        case 3:
            std::cout << "Você escolheu a opção 3!" << std::endl;
            metodo_03();
            break;
        case 4:
            std::cout << "Você escolheu a opção 4!" << std::endl;
            metodo_04();
            break;
        case 5:
            std::cout << "Você escolheu a opção 5!" << std::endl;
            metodo_05();
            break;
        case 6:
            std::cout << "Você escolheu a opção 6!" << std::endl;
            metodo_06();
            break;
        case 7:
            std::cout << "Você escolheu a opção 7!" << std::endl;
            metodo_07();
            break;
        case 8:
            std::cout << "Você escolheu a opção 8!" << std::endl;
            metodo_08();
            break;
        case 9:
            std::cout << "Você escolheu a opção 9!" << std::endl;
            metodo_09();
            break;
        case 10:
            std::cout << "Você escolheu a opção 10!" << std::endl;
            metodo_10();
            break;
        default:
            std::cout << "Opção inválida!" << std::endl;
            break;
    }

    return 0;
}