#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Tijolo.hpp"

Tijolo::Tijolo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Tijolo::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Tijolo::gerarRuidoAtaque()
{
    return "crash crash";
}
