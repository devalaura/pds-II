#ifndef SENHOR_BARRIGA
#define SENHOR_BARRIGA
#include "../core-simulador-hpp/Personagem.hpp"
class SenhorBarriga : public Personagem
{
    public:
        SenhorBarriga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif