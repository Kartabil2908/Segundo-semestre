#ifndef _METODOS_HPP_
#define _METODOS_HPP_

#include <iostream>

double factorial(int n)
{
    double fat;

    fat = n * factorial(n-1);

    return (fat);
}

double potencia( double numero, int expo)
{
    double pot;

    pot = numero * potencia(numero,expo-1);

    return (pot);
}


void metodo_01()
{
    int n1;
    double fat;
    fat = factorial(n1);
    std::cout << "O fatorial de " << n1 <<" é " << fat << std::endl;
}


void metodo_02()
{
    int n2, expo; 
    double pot;

    std::cout << "base = " << std::endl;
    std::cin >> n2;
    std::getchar();

    std::cout << "expoente = " << std::endl;
    std::cin >> expo;
    std::getchar();


    pot = potencia(n2, expo);

    std::cout << "A potência de " << n2 <<" elevado à " << expo << " é " << pot << std::endl;
}
#endif
