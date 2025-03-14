#include "Empresa.h"
#include <iostream>
#include <string>

Empresa::Empresa(std::string nome, Funcionario f1, Funcionario f2)
{
    this->nome = nome;
    this->f1 = f1;
    this->f2 = f2;
}

Empresa::~Empresa(){}

std::string Empresa::get_nome()
{
    return nome;
}
void Empresa::set_nome(std::string nome)
{
    this->nome = nome;
}

Funcionario Empresa::get_f1()
{
    return f1;
}
void Empresa::set_f1(Funcionario f)
{
    f1 = f;
}

Funcionario Empresa::get_f2()
{
    return f2;
}
void Empresa::set_f2(Funcionario f)
{
    f2 = f;
}

void Empresa::imprime_info()
{
    std::cout << "nome: " << nome << std::endl;
    f1.imprime_info();
    f2.imprime_info();
}
