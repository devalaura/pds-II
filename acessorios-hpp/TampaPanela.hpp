#ifndef TAMPA_PANELA
#define TAMPA_PANELA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class TampaPanela : public ArmaDefesa
{
    public:
        TampaPanela(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif