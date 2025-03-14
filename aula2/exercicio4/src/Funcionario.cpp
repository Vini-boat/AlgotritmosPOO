#include "Funcionario.h"
#include <iostream>
#include <string>

Funcionario::Funcionario(){
    nome = "Padrão";
    endereco = "Padrão";
    calc = Calculadora();

}
Funcionario::Funcionario(std::string nome, std::string endereco, Calculadora calc)
{
    this->nome = nome;
    this->endereco = endereco;
    this->calc = calc;
}

Funcionario::~Funcionario(){}

std::string Funcionario::get_nome()
{
    return nome;
}
void Funcionario::set_nome(std::string nome)
{
    this->nome = nome;
}

std::string Funcionario::get_endereco()
{
    return endereco;
}
void Funcionario::set_endereco(std::string endereco)
{
    this->endereco = endereco;
}

Calculadora Funcionario::get_calculadora()
{
    return calc;
}
void Funcionario::set_calculadora(Calculadora calc)
{
    this->calc = calc;
}

float Funcionario::soma(float a, float b)
{
    calc.soma(a,b);
}
float Funcionario::subtrai(float a, float b)
{
    calc.subtrai(a,b);
}
float Funcionario::multiplica(float a, float b)
{
    calc.multiplica(a,b);
}
float Funcionario::divide(float a, float b)
{
    calc.divide(a,b);
}

float Funcionario::eleva_ao_quadrado(int n)
{
    calc.eleva_ao_quadrado(n);
}
float Funcionario::eleva_ao_cubo(int n)
{
    calc.eleva_ao_cubo(n);
}

void Funcionario::imprime_info()
{
    std::cout << "nome: " << nome << ", endereco: " << endereco << std::endl;
    calc.imprime_info();
}
