#ifndef VASSOURA
#define VASSOURA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Vassoura : public ArmaAtaque
{
    public:
        Vassoura(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif