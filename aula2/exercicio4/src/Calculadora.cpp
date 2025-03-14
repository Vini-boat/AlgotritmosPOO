#include "Calculadora.h"
#include <iostream>
#include <string>

Calculadora::Calculadora()
{
    memoria = 0;
    cor = "Padrão";
}

Calculadora::Calculadora(std::string cor)
{
    this->memoria = 0;
    this->cor = cor;
}

Calculadora::~Calculadora(){}

float Calculadora::get_memoria()
{
    return memoria;
}
void  Calculadora::set_memoria(float memoria)
{
    this->memoria = memoria;
}

std::string Calculadora::get_cor()
{
    return cor;
}
void  Calculadora::set_cor(std::string cor)
{
    this->cor = cor;
}

float Calculadora::soma(float a, float b)
{
    return a+b;
}

float Calculadora::subtrai(float a, float b)
{
    return a-b;
}

float Calculadora::multiplica(float a, float b)
{
    return a*b;
}

float Calculadora::divide(float a, float b)
{
    return a/b;
}

float Calculadora::eleva_ao_quadrado(int n)
{
    return n*n;
}

float Calculadora::eleva_ao_cubo(int n)
{
    return n*n*n;
}

void Calculadora::imprime_info()
{
    std::cout << "memoria: " << memoria << ", cor: " << cor << std::endl;
}
