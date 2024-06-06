#include "./hpp/Caminhao.hpp"
#include "./hpp/Van.hpp"
#include "./hpp/Veiculo.hpp"

#include <vector>

using std::vector;

int main() {
    Caminhao* caminhao1 = new Caminhao("Volvo", "VMX 290 6X4", 23, 3);
    Caminhao* caminhao2 = new Caminhao("Mercedes-Benz", "Axor 3344", 23, 3);
    Caminhao* caminhao3 = new Caminhao("Scania", "R450", 40, 3);

    Van* van1 = new Van("Mercedes-Benz", "Spinter 2024", 1, 15);
    Van* van2 = new Van("Ford", "Transist 2024", 1, 15);
    Van* van3 = new Van("Fiat", "Ducato 2024", 2, 17);

    vector<Veiculo*> vector;

    vector.push_back(caminhao1);
    vector.push_back(caminhao2);
    vector.push_back(caminhao3);
    vector.push_back(van1);
    vector.push_back(van2);
    vector.push_back(van3);

    for (auto veiculo : vector) {
        veiculo->exibirDados();
    }
}