#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/FolhaBananeira.hpp"

FolhaBananeira::FolhaBananeira(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string FolhaBananeira::getDescricaoArma() 
{
    return this->descricaoArma;
}

int FolhaBananeira::getResistencia() 
{
    return this->resistencia;
}