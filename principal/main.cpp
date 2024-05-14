#include <iostream>
#include <string>

#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chiquinha.hpp"
#include "../personagens-hpp/Kiko.hpp"
#include "../personagens-hpp/Nhonho.hpp"
#include "../personagens-hpp/SenhorBarriga.hpp"
#include "../personagens-hpp/SeuMadruga.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/BolhaSabao.hpp"
#include "../acessorios-hpp/Capa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Folha.hpp"
#include "../acessorios-hpp/Lencol.hpp"
#include "../acessorios-hpp/Pa.hpp"
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Tampa.hpp"
#include "../acessorios-hpp/Tijolo.hpp"
#include "../acessorios-hpp/Vassoura.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* rosa  = new Rosa("Super Rosa Amarela", 0, 10);
    ArmaDefesa* escudo = new Escudo("Latão", 1);

    ArmaAtaque* colher = new Colher("Colher de Pata", 0, 50);
    ArmaDefesa* folhaBananeira = new Folha("Folha de bananeira", 1);
    
    ArmaAtaque* bolhaSabao = new BolhaSabao("Bolha de Sabão Ácido", 0, 60);
    ArmaDefesa* tampaPanela = new Tampa("Tampa de panela aço inox", 2);

    ArmaAtaque* vassoura = new Vassoura("Vassoura da Bruxa do 71", 0, 100);
    ArmaDefesa* lencolMagico = new Lencol("Lençol mágico", 1);

    ArmaAtaque* tijolo = new Tijolo("Tijolo de pedra de boa qualidade", 0, 110);
    ArmaDefesa* capaInvisibilidade = new Capa("Capa de invisibilidade", 3);

    ArmaAtaque* pa = new Pa("Pá para escavações profundas", 0, 55);
    ArmaDefesa* armadura = new Armadura("Armadura de ferro fundido", 5);

    Personagem* p1 = new Chaves(1, "Chaves", 50, rosa, escudo);
    Personagem* p2 = new Chiquinha(1, "Chiquinha", 40, bolhaSabao, tampaPanela);
    Personagem* p3 = new SeuMadruga(1, "Seu Madruga", 100, tijolo, capaInvisibilidade);

    Personagem* p4 = new Kiko(2, "Kiko", 40, colher, folhaBananeira);
    Personagem* p5 = new Nhonho(2, "Nhonho", 30, vassoura, lencolMagico);
    Personagem* p6 = new SenhorBarriga(2, "Senhor Barriga", 80, pa, armadura);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}