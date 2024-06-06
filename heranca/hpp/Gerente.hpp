#ifndef GERENTE
#define GERENTE

#include "./Funcionario.hpp"

class Gerente : public Funcionario
{
    protected:
        double bonusAnual;

    public:
        Gerente(string nome, int id, double bonusAnual);
        double calcularSalarioTotal() override;
};

#endif