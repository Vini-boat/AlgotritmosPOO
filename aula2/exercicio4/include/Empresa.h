#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>

#include "Funcionario.h"

class Empresa
{
    public:
        Empresa(std::string nome, Funcionario f1, Funcionario f2);
        virtual ~Empresa();

        std::string get_nome();
        void set_nome(std::string nome);

        Funcionario get_f1();
        void set_f1(Funcionario f);

        Funcionario get_f2();
        void set_f2(Funcionario f);

        void imprime_info();

    private:
        std::string nome;
        Funcionario f1;
        Funcionario f2;
};

#endif // EMPRESA_H
