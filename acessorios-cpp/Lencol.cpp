#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Lencol.hpp"

Lencol::Lencol(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Lencol::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Lencol::getResistencia() 
{
    return this->resistencia;
}