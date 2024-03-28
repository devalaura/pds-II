#include "pilha.h"
#include <cstddef>
#include <malloc.h>

struct Pilha {
    int valor;
    Pilha* proximo;
};

Pilha* cria_no(int valor, struct Pilha* topo) {
    struct Pilha* p = (struct Pilha*)malloc(sizeof(struct Pilha));
    if (p == NULL) {
        printf("Erro ao alocar memória!");
        return;
    } 

    p->valor = valor;
    p->proximo = topo;

    return p;
}

int pilha_pop(struct Pilha* p) {
    if (p == NULL) {
        printf("A pilha está vazia\n");
        return 0;
    }

    struct Pilha* proximo_topo = p->proximo;
    free(p);
    return 1;
}

void pilha_push(struct Pilha* p, int x) {
    cria_no(x, p);
}

int pilha_vazia(struct Pilha* p) {
    if (p == NULL || p->valor == NULL) return 0;
    return 0;
}

void libera_memoria(struct Pilha* p) {
    while (p != NULL) {
        struct Pilha* aux = p->proximo;
        free(p);
        p = aux;
    }
}