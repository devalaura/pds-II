typedef struct Pilha Pilha;

/// @brief Cria um novo objeto do tipo Pilha.
/// @param valor Um inteiro do valor a ser armazenado naquele elemento.
/// @param p O último objeto da pilha atual.
/// @return Retorna um ponteiro para o novo objeto de Pilha alocado dinamicamente.
Pilha* cria_no(int valor, Pilha* topo);

/// @brief Retira um elemento do topo da Pilha.
/// @param p Um ponteiro para a Pilha a ser alterada.
/// @return Retorna 1 se a remoção for bem sucedida e 0 caso não.
int pilha_pop(Pilha* p);

/// @brief Inclui um novo elemento no topo da Pilha.
/// @param p Um ponteiro para a Pilha a ser alterada.
/// @param x O novo valor da nova pilha.
void pilha_push(Pilha* p, int x);

/// @brief Verifica se a pilha está vazia.
/// @param p Um ponteiro para a Pilha a ser verificada.
/// @return Retorna 1 se a pilha estiver vazia e 0 caso contrário.
int pilha_vazia(Pilha* p);

/// @brief Libera a memória alocada para a Pilha.
/// @param p Um ponteiro para a Pilha a ser liberada.
void pilha_libera(Pilha* p);