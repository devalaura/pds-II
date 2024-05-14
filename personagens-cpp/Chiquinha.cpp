#include "../personagens-hpp/Chiquinha.hpp"

Chiquinha::Chiquinha(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Chiquinha::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Chiquinha::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Chiquinha::pegarDescricao() 
{
    return "Pois é, pois é, pois é...";
}