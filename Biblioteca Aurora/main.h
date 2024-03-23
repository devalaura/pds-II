#include <string>

using namespace std;

typedef struct Livro livro;

// 1 - Listar livros do catálogo.

/**
 * Lista todos os livros do catálogo.
 * @return Um ponteiro para a primeira prosição da lista de livros ou NULL se não existirem registros.
*/
livro* lista_todos_livros(); 

/**
 * Busca livro por ID de registro.
 * @param id Um inteiro que representa um ID de registro.
 * @return Um ponteiro para o registro encontrado ou NULL se não encontrar o registro.
*/
livro* lista_livro_por_id(int id);

// 2 - Filtrar livros.

/**
 * Busca por livros com a palavra chave no título ou descrição de um registro.
 * @param palavra Uma palavra chave a ser buscada no registro.
 * @return Um ponteiro para o primeiro registro encontrado ou NULL se não encontrar registros.
*/
livro* busca_livro_por_palavrachave(string palavra);

typedef struct Reserva reserva;

// 3 - Reservar livros.

/**
 * Valida e persiste o formulário de reserva.
 * @param formulario Um ponteiro para o formulário de reserva de livros.
 * @return Retorna 1 se o formulário for validado e persistido corretamente e 0 se houver algum problema.
*/
int valida_e_registra_reserva(reserva* formulario);

/**
 * No registro do livro desejado, altera o status de reservado para true e a data inicial da reserva para a data atual.
 * @param id Um inteiro que representa o ID do registro do livro.
 * @return Retorna 1 se o registro for alterado corretamente e 0 se houver algum problema durante.
*/
int reserva_livro(int id);

// 4 - Renovar empréstimo de livros.

/**
 * Soma à data final do empréstimo mais 10 dias no registro do livro desejado.
 * @param id Um inteiro que representa o ID do registro do livro.
 * @return Retorna 1 se o registro for alterado corretamente e 0 se houver algum problema.
*/
int renova_emprestimo(int id);

typedef struct Inscricao inscricao;

// 5 - Inscrever clientes em eventos culturais.

/**
 * Reduz 1 vaga na quantidade de vagas disponíveis em evento.
 * @param id Um inteiro que representa o ID do registro do evento.
 * @return Retorna 1 se o registro for alterado corretamente e 0 se houver algum problema.
*/
int altera_quantidade_inscritos(int id);

/**
 * Persiste nova inscrição em evento.
 * @param formulario Um ponteiro ao formulário de inscrição preenchido pelo cliente.
 * @return Retorna 1 se o registro for persistido corretamente e 0 se houver algum problema.
*/
int persistir_nova_inscricao(inscricao* formulario);

