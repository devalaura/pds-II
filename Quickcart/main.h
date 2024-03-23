#include <string>

using namespace std;

// 1 - Registrar compra de produto.

typedef struct Cliente cliente;

/**
 * Persiste cadastro de cliente.
 * @param formulario Um formulário de cadastro de cliente preenchido.
 * @return Retorna 1 se cadastro for persistido corretamente e 0 se houver algum erro.
*/
int persiste_cadastro_cliente(cliente formulario);

typedef struct Produto produto;

/**
 * Adiciona nova compra no cadastro do cliente.
 * @param id Um inteiro referente ao ID do cliente.
 * @param objeto Um objeto com os dados do produto comprado.
 * @return Retorna 1 se o objeto for persistido corretamente e 0 se houver algum erro. 
*/
int persiste_nova_compra(int id, produto objeto);


// 2 - Integrar sistema de GPS.

/**
 * Busca rastreamento de entrega por id.
 * @param id Um inteiro referente ao ID da entrega.
 * @return Uma string referente à URL de rastreamento em tempo real da entrega ou NULL caso não seja encontrada entrega.
*/
string busca_rastreamento_por_id(int id);

/**
 * Busca todos os rastreamentos ativos de entrega.
 * @return Um ponteiro para a primeira posição do vetor de strings referentes às URLs de rastreamento em tempo real das entregas ou NULL caso não hajam rastreamento.
*/
string* busca_rastreamentos();

/**
 * Cria novo rastreamento.
 * @param idEntregador Um inteiro referente ao ID do entregador responsável.
 * @param idEntrega Um inteiro referente ao ID da entrega.
 * @return Uma string referente à URL de rastreamento da entrega.
*/
string cria_rastreamento(int idEntregador, int idEntrega);

typedef struct Rastreamento rastreamento;

/**
 * Persiste novo rastreamento.
 * @param objeto Um objeto com os dados de rastreamento da entrega.
 * @return Retorna 1 se o objeto for persistido corretamente e 0 se houver algum erro. 
*/
string persiste_rastreamento(rastreamento objeto);

// 3 - Busca melhores rotas.

typedef struct Rotas rotas;

/**
 * Busca rotas possíveis entre dois pontos.
 * @param pontoA Um inteiro correspondente ao ponto A.
 * @param pontoB Um inteiro correspondente ao ponto B.
 * @return Retorna um ponteiro para a primeira posição de um vetor de rotas possíveis ou NULL caso não há rotas possíveis.
*/
rotas* busca_rotas_entre_dois_pontos(int pontoA, int pontoB);

/**
 * Valida 3 melhores rotas dentre possibilidade.
 * @param rotas_possiveis Um ponteiro para um vetor de rotas possíveis entre dois pontos.
 * @return Retorna um ponteiro para a primeira posição do vetor de 3 melhores rotas.
*/
rotas* melhores_rotas(rotas* rotas_possiveis);

// 4 - Exibir rota escolhida

/**
 * Busca e exibe rota escolhida.
 * @param id Um inteiro referente ao ID da rota escolhida.
 * @return Um ponteiro para a rota escolhida ou NULL caso não seja encontrada.
*/
rotas* exibir_rota(int id);

// 5 - Recalcular rotas.

/**
 * Busca nova rota para entrega em andamento sob novo ponto inicial.
 * @param id Um inteiro referente ao id da entrega em andamento.
 * @param pontoA Um inteiro referente ao novo ponto inicial.
 * @return Um ponteiro para a nova rota.
*/
rotas* recalcula_rotas(int id, int pontoA);