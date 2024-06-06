#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
using std::string;

class Funcionario 
{
    protected:
        string nome;
        int id;
        double salarioBase;

    public:
        Funcionario(string nome, int id, double salarioBase = 1412.00);
        virtual double calcularSalarioTotal() = 0;
};

#endif
