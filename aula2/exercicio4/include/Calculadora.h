#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <string>

class Calculadora
{
    public:
        Calculadora();
        Calculadora(std::string cor);
        virtual ~Calculadora();

        float get_memoria();
        void set_memoria(float memoria);

        std::string get_cor();
        void set_cor(std::string cor);

        float soma(float a, float b);
        float subtrai(float a, float b);
        float multiplica(float a, float b);
        float divide(float a, float b);

        float eleva_ao_quadrado(int n);
        float eleva_ao_cubo(int n);

        void imprime_info();

    private:
        float memoria;
        std::string cor;
};

#endif // CALCULADORA_H
