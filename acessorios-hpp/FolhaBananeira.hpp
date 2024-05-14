#ifndef FOLHA_BANANEIRA
#define FOLHA_BANANEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class FolhaBananeira : public ArmaDefesa
{
    public:
        FolhaBananeira(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif