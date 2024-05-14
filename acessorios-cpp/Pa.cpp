#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Pa.hpp"

Pa::Pa(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pa::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Pa::gerarRuidoAtaque()
{
    return "uoop uoop";
}
