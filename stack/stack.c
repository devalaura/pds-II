#include "stack.h"
#include <stddef.h>

struct Pilha {
    int value;
    struct Pilha* top;
};

Pilha* pilha_cria(int value) {
    struct Pilha* p = (struct Pilha*)malloc(sizeof(struct Pilha));
    struct Pilha* top = (struct Pilha*)malloc(sizeof(struct Pilha));

    if (p == NULL) {
        printf("Error allocationg memory!");
        return;
    } 

    p->value = value;
    p->top = top;

    return p;
}

int pilha_pop(struct Pilha* p) {
    if (p == NULL) {
        printf("The stack's empty!\n");
        return 0;
    }

    struct Pilha* proximo_topo = p->top;
    free(p);

    printf("The current top value is: %d", p->value);

    return 1;
}

void pilha_push(struct Pilha* p, int x) {
    struct Pilha* new = (struct Pilha*)malloc(sizeof(struct Pilha));
    if (new == NULL) {
        printf("Error allocating memory!\n");
        return;
    } 

    new->value = x;
    new->top = p;

    printf("The current top value is: %d", p->value);
}

int pilha_vazia(struct Pilha* p) {
    if (p == NULL || p->top == NULL) return 1;
    return 0;
}

void libera_memoria(struct Pilha* p) {
    while (p != NULL) {
        struct Pilha* aux = p->top;
        free(p);
        p = aux;
    }
}
