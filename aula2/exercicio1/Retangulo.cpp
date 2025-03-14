#include "Retangulo.h"


Retangulo::Retangulo()
{
    base = 10.0;
    altura = 5.0;
}

Retangulo::Retangulo(float b, float a)
{
    base = b;
    altura = a;
}

float Retangulo::get_base()
{
    return base;
}

float Retangulo::get_altura()
{
    return altura;
}

float Retangulo::get_area()
{
    return base*altura;
}
