#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/BolhaSabao.hpp"

BolhaSabao::BolhaSabao(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int BolhaSabao::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string BolhaSabao::gerarRuidoAtaque()
{
    return "blob blob";
}
