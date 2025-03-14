#include <iostream>
#include "Pessoa.cpp"

using namespace std;

int main()
{
    Pessoa p1("Vinicius", 20, 1.80, 2, "Madre Alice 16");
    Pessoa p2("Cau�", 21, 1.80, 1, "Rua D");
    Pessoa p3("Fulano", 123, 1.20, 0, "Rua A");

    p1.imprime_info();
    p2.imprime_info();
    p3.imprime_info();

    Pessoa arr[3] = {p1,p2,p3};

    for(Pessoa p : arr){
        if(p.is_filho_unico()){
            cout << "Filho(a) �nico(a)" << endl;
        } else {
            cout << "N�o � filho(a) �nico(a)" << endl;
        }
    }

    return 0;
}
