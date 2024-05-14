#include "../personagens-hpp/SenhorBarriga.hpp"

SenhorBarriga::SenhorBarriga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int SenhorBarriga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int SenhorBarriga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string SenhorBarriga::pegarDescricao() 
{
    return "Pague o aluguel!";
}