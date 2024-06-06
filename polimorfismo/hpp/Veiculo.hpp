#ifndef VEICULO
#define VEICULO

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Veiculo 
{ 
    protected: 
        string marca; 
        string modelo; 
        int capacidade; // Capacidade de carga em toneladas 
        
    public: 
        Veiculo(const string& marca, const string& modelo, int capacidade) 
            : marca(marca), modelo(modelo), capacidade(capacidade) {} 
            
        virtual void exibirDados() const 
        {
            cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas\n" << endl; 
        } 
}; 

#endif