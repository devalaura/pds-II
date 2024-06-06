#ifndef ESTAGIARIO 
#define ESTAGIARIO

#include "./Funcionario.hpp"

class Estagiario : public Funcionario 
{
    public:
        Estagiario(string nome, int id, double salarioBase = 812.65);
};

#endif