#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Vassoura.hpp"

Vassoura::Vassoura(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Vassoura::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Vassoura::gerarRuidoAtaque()
{
    return "uoosh uoosh";
}
