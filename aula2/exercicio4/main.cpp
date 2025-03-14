#include <iostream>
#include "Calculadora.h"
#include "Funcionario.h"
#include "Empresa.h"

using namespace std;

int main()
{
    Calculadora calc1("Preto");
    Funcionario func1("Caua", "Rua D", calc1);

    Calculadora calc2("Branco");
    Funcionario func2("Vini", "Rua A", calc2);

    cout << func1.soma(2,2) << endl;
    cout << func1.subtrai(5,4) << endl;
    cout << func1.multiplica(2,3) << endl;


    cout << func2.divide(6,3) << endl;
    cout << func2.soma(7,2) << endl;
    cout << func2.multiplica(8,3) << endl;

    Empresa empresa("VC", func1, func2);

    empresa.imprime_info();



    return 0;
}
