#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

class Pessoa{
private:
    char* nome;
    int idade;
    float altura;
    int qtd_irmaos;
    char* endereco;
public:
    Pessoa(char* nome, int idade, float altura, int qtd_irmaos,char* endereco);
    void imprime_info();
    bool is_filho_unico();

};



#endif // PESSOA_H_INCLUDED
