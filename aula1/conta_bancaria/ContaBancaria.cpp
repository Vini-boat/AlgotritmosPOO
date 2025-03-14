#include "ContaBancaria.h"

ContaBancaria ContaBancaria::ContaBancaria()
{
    saldo = 0;
    ativa = false;
    limite = 1000;
}

void ContaBancaria::~ContaBancaria()
{
}

bool ContaBancaria::Abrir(int numeroConta, int numeroAgencia, char* nome, int tipo)
{
    if(ativa) return false;
    numeroDaConta = numeroConta;
    numeroDaAgencia = numeroAgencia;
    nomeCliente = nome;
    tipoDaConta = tipo;
    return true;
}

bool ContaBancaria::AlteraSenha(char *novaSenha)
{
    if(novaSenha == senha) return false;
    senha = novaSenha;
    return true;
}

bool ContaBancaria::Depositar(float valor)
{
    if(valor <= 0) return false;
    saldo += valor;
    return true;
}

bool ContaBancaria::Sacar(float valor)
{
    if(valor <= 0) return false;
    saldo -= valor;
    return true;
}

float ContaBancaria::Consultar(char *senha)
{
    if(this->senha != senha) return -9999;
    return saldo;
}

void ContaBancaria::Fechar()
{
    saldo = 0;
    ativa = false;
}
