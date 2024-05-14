#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Folha.hpp"

Folha::Folha(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Folha::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Folha::getResistencia() 
{
    return this->resistencia;
}