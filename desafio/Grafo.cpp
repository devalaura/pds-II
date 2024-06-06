#include "Grafo.hpp"

void Grafo::constroiGrafo()
{
    this->vertice = this->proximoVertice();

    cout << "Deseja adicionar novo vertice?\nDigite:\n(1) Sim\n(2) Nao\n";
    string opcaoStr;
    getline(cin, opcaoStr);

    int opcao = stoi(opcaoStr);
    do {
        this->lista.push_back(constroiVertice());

        cout << "Deseja adicionar novo vertice?\nDigite:\n(1) Sim\n(2) Nao\n";
        getline(cin, opcaoStr);

        opcao = stoi(opcaoStr);
    } while (opcao == 1);



}

int Grafo::adjacenciaEntreDoisVertices(const int a, const int b)
{
    return 0;
}

vector<int> Grafo::listaVerticesAdjacentes(const int vertice)
{
    return vector<int>();
}

int Grafo::proximoVertice()
{
    return this->vertice++;
}

int Grafo::adicionarAdjacente()
{
    try {
        string adjacenteStr;
        cout << "Insira um vertice adjacente - deve ser um valor inteiro maior que 0: ";
        
        getline(cin, adjacenteStr);
        int adjacente = stoi(adjacenteStr);

        this->adjacentes.push_back(adjacente);
        
        string opcao;
        cout << "Adicionar outro vertice?\nDigite:\n(1) Sim\n(2)Nao";
        getline(cin, opcao);

        return stoi(opcao);

    } catch (const invalid_argument& e) {
        cout << "Erro de conversão: " << e.what() << endl;
    }

    
}

vector<int> Grafo::constroiVertice()
{
    cout << "O vertice " << this->vertice << " eh adjacente a quais outros vertices?";
    int menu;

    do {
        menu = adicionarAdjacente();
    } while (menu == 1);

    vector<int> vetor;

    vetor.push_back(this->vertice);
    for (auto adjacente : this->adjacentes) {
        vetor.push_back(adjacente);
    }

    return vetor;
}

void Grafo::imprimeMatriz(const vector<vector<int>> &matriz)
{
}

void Grafo::imprimeLista(const vector<vector<int>> &lista)
{
}
