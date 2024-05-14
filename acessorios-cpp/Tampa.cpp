#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Tampa.hpp"

Tampa::Tampa(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Tampa::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Tampa::getResistencia() 
{
    return this->resistencia;
}