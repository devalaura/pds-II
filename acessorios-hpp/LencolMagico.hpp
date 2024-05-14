#ifndef LENCOL_MAGICO
#define LENCOL_MAGICO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class LencolMagico : public ArmaDefesa
{
    public:
        LencolMagico(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif