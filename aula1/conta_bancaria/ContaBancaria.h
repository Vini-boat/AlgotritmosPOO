#ifndef CONTABANCARIA_H_INCLUDED
#define CONTABANCARIA_H_INCLUDED
#endif // CONTABANCARIA_H_INCLUDED

enum tipoDeConta: {
    contaCorrente,
    contaConjunta,
    contaJuridica,
    poupanca
    };

class ContaBancaria{
    public:
        //Construtor padrão
        ContaBancaria();
        //Destrutor
        ~ContaBancaria();
        //Métodos
        bool Abrir (int numeroConta, int numeroAgencia, char *nome, int tipo);
        bool AlteraSenha (char *novaSenha);
        bool Depositar (float valor);
        bool Sacar (float valor);
        float Consultar(char *senha);
        void Fechar();
    private:
        int numeroDaConta;
        int numeroDaAgencia;
        char*nomeCliente;
        char*senha;
        tipoDeConta tipoDaConta;
        float saldo;
        bool ativa;
        float limite;
};
