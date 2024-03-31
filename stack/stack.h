typedef struct Pilha Pilha;

/// @brief Creates a new stack object.
/// @param value New integer value to start stack element.
/// @return Returns a pointer to the new stack object.
Pilha* pilha_cria(int value);

/// @brief Removes the first element from the stack top.
/// @param p A pointer to the stack.
/// @return Returns 1 in case of success and 0 in case of error.
int pilha_pop(Pilha** p);

/// @brief Add a new element at the stack top.
/// @param p A pointer to the stack.
/// @param x The new integer value of the new element.
void pilha_push(Pilha* p, int x);

/// @brief Verifies if the stack is empty.
/// @param p A pointer to the stack.
/// @return Returns 1 in case of empty stack and 0 in case of non-empty stack.
int pilha_vazia(Pilha* p);

/// @brief Frees the memory allocated by the stack.
/// @param p A pointer to the stack.
void pilha_libera(Pilha* p);