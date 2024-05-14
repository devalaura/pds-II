#ifndef NHONHO
#define NHONHO
#include "../core-simulador-hpp/Personagem.hpp"
class Nhonho : public Personagem
{
    public:
        Nhonho(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif