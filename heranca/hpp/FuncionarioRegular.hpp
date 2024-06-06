#ifndef FUNCIONARIO_REGULAR
#define FUNCIONARIO_REGULAR 

#include "./Funcionario.hpp"

class FuncionarioRegular : public Funcionario
{
    public:
        FuncionarioRegular(string nome, int id);
};

#endif