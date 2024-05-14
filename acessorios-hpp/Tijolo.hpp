#ifndef TIJOLO
#define TIJOLO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Tijolo : public ArmaAtaque
{
    public:
        Tijolo(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif