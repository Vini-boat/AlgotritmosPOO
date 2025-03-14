#include "Pessoa.h"

Pessoa::Pessoa(char* nome, int idade, float altura, int qtd_irmaos,char* endereco)
{
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
    this->qtd_irmaos = qtd_irmaos;
    this->endereco = endereco;
}

void Pessoa::imprime_info()
{
    std::cout << nome << " " << idade << " " << altura << " " << qtd_irmaos << " " << endereco << std::endl;
}

bool Pessoa::is_filho_unico()
{
    return qtd_irmaos <= 0;
}
