#ifndef _TRIG_HPP_
#define _TRIG_HPP_

#include <iostream>

const double PI = 3.1415;

class Trig
{
    private:

    double angle_degrees;
    double angle_rad;
    double angle_gons; // grados
    int precision;

    protected:

    double to_rads (double angle_degrees)
    {
        double resultado;

        resultado = (angle_degrees * PI)/180;

        return (resultado);                 
    }


    double to_degs ( double angle_gons)
    {
        double angle_degrees;

        angle_degrees = (angle_gons * 360)/400;

        return (angle_degrees);

    }

    double to_gons( double angle_degrees)
    {
        double resul;
        
        resul = (angle_degrees*400)/360;
    }

    double factorial (int n)
    {
        double fatorial = n * factorial(n-1);
        
        return (fatorial);

    }

    double pow (double x, int n)
    {
        double pot;

        pot = x * pow(x,n-1);

        return (pot);

    }


    
    public:

    Trig();

    Trig ( double angle_degrees)
    {   
        this->angle_degrees = angle_degrees;

        this->angle_rad = this->to_rads(angle_degrees);
        
        this->angle_gons = this->to_gons(angle_degrees);

        this->precision = 0;


    }

    void set_degrees ( double angle_degrees)
    {
        this->angle_degrees = angle_degrees;
        this->angle_rad = this->to_rads(angle_degrees);
        this->angle_gons = this->to_gons(angle_degrees);

    }

    double get_degrees()
    {
        double ang = this->angle_degrees;

        return(ang);
        
    }

    double sin_t(); // em radianos

    double sin_g( double gons); // em grados
};

#endif