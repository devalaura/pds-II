#include <iostream>
#include <iomanip>

#include "./hpp/FuncionarioRegular.hpp"
#include "./hpp/Gerente.hpp"
#include "./hpp/Estagiario.hpp"

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() 
{
    FuncionarioRegular* funcionarioRegular = new FuncionarioRegular("Ana", 1);
    Gerente* gerente = new Gerente("Laura", 2, 24000.12);
    Estagiario* estagiario = new Estagiario("Ana Laura", 3);

    cout << "O funcionario regular recebe mensalmente: " << fixed << setprecision(2) << funcionarioRegular->calcularSalarioTotal() << endl;
    cout << "O gerente recebe mensalmente: " << fixed << setprecision(2) << gerente->calcularSalarioTotal() << endl;
    cout << "O estagiario recebe mensalmente: " << fixed << setprecision(2) << estagiario->calcularSalarioTotal() << endl;

    return 0;
}