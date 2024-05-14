#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/CapaInvisibilidade.hpp"

CapaInvisibilidade::CapaInvisibilidade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string CapaInvisibilidade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int CapaInvisibilidade::getResistencia() 
{
    return this->resistencia;
}