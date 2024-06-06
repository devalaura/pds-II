#ifndef CAMINHAO
#define CAMINHAO

#include "./Veiculo.hpp"

class Caminhao : public Veiculo 
{ 
    private: 
        int eixos; 
    
    public: 
        Caminhao(const string& marca, const string& modelo, int capacidade, int eixos) 
            : Veiculo(marca, modelo, capacidade), eixos(eixos) {} 
            
        void exibirDados() const override { 
            cout << "Caminhão - "; Veiculo::exibirDados(); cout << "Eixos: " << eixos << "\n"; 
        }
        
}; 

#endif