#ifndef PA
#define PA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Pa : public ArmaAtaque
{
    public:
        Pa(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif