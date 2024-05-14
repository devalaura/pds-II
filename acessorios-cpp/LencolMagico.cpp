#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/LencolMagico.hpp"

LencolMagico::LencolMagico(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string LencolMagico::getDescricaoArma() 
{
    return this->descricaoArma;
}

int LencolMagico::getResistencia() 
{
    return this->resistencia;
}