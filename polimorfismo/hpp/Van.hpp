#ifndef VAN
#define VAN

#include "./Veiculo.hpp"

class Van : public Veiculo 
{ 
    private: 
        int passageiros; 
        
    public: 
        Van(const string& marca, const string& modelo, int capacidade, int passageiros) 
            : Veiculo(marca, modelo, capacidade), passageiros(passageiros) {} 

        void exibirDados() const override 
        { 
            cout << "Van - "; Veiculo::exibirDados(); cout << "Passageiros: " << passageiros << "\n"; 
        } 

};

#endif