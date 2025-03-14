#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

#include "Calculadora.h"

class Funcionario
{
    public:
        Funcionario();
        Funcionario(std::string nome, std::string endereco, Calculadora calc);
        virtual ~Funcionario();

        std::string get_nome();
        void set_nome(std::string nome);

        std::string get_endereco();
        void set_endereco(std::string endereco);

        Calculadora get_calculadora();
        void set_calculadora(Calculadora calc);

        float soma(float a, float b);
        float subtrai(float a, float b);
        float multiplica(float a, float b);
        float divide(float a, float b);

        float eleva_ao_quadrado(int n);
        float eleva_ao_cubo(int n);

        void imprime_info();

    private:
        std::string nome;
        std::string endereco;
        Calculadora calc;
};

#endif // FUNCIONARIO_H
