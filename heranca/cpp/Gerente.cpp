#include "./../hpp/Gerente.hpp"

Gerente::Gerente(string nome, int id, double bonusAnual)
: Funcionario(nome, id, Gerente::calcularSalarioTotal())
{ }

double Gerente::calcularSalarioTotal() 
{
    double bonusMensal = this->bonusAnual / 12;
    return this->salarioBase + bonusMensal;
}