#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/TampaPanela.hpp"

TampaPanela::TampaPanela(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string TampaPanela::getDescricaoArma() 
{
    return this->descricaoArma;
}

int TampaPanela::getResistencia() 
{
    return this->resistencia;
}