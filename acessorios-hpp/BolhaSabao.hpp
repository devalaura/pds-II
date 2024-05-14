#ifndef BOLHA_SABAO
#define BOLHA_SABAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class BolhaSabao : public ArmaAtaque
{
    public:
        BolhaSabao(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif