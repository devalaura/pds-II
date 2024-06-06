#ifndef GRAFO
#define GRAFO

#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::getline;
using std::cin;
using std::stoi;
using std::invalid_argument;

class Grafo 
{
    public:
        vector<vector<int>> matriz;
        vector<vector<int>> lista;
        virtual void constroiGrafo();
        virtual int adjacenciaEntreDoisVertices(const int a, const int b);
        virtual vector<int> listaVerticesAdjacentes(const int vertice);

    private:
        int vertice = 0;
        vector<int> adjacentes;
        vector<int> vertices;
        virtual int proximoVertice();
        virtual int adicionarAdjacente();
        virtual vector<int> constroiVertice();
        virtual void imprimeMatriz(const vector<vector<int>>& matriz);
        virtual void imprimeLista(const vector<vector<int>>& lista);

};

#endif