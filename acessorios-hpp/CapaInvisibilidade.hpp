#ifndef CAPA_INVISIBILIDADE
#define CAPA_INVISIBILIDADE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class CapaInvisibilidade : public ArmaDefesa
{
    public:
        CapaInvisibilidade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif