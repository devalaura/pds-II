#include "stack.h"
#include <stddef.h>
#include <malloc.h>
#include <stdio.h>

struct Pilha {
    int value;
    struct Pilha* top;
};

Pilha* pilha_cria(int value) {
    struct Pilha* p = (struct Pilha*)malloc(sizeof(struct Pilha));

    if (p == NULL) {
        printf("Error allocationg memory!");
        return p;
    } 

    p->value = value;
    p->top = NULL;

    return p;
}

int pilha_pop(Pilha** p) {
    if (*p == NULL) {
        printf("The stack's empty!\n");
        return 0;
    }
    
    struct Pilha* current = *p;
    int value = current->value;
    *p = (*p)->top;
    free(current);

    printf("The popped value was: %d.\n", value);

    return 1;
}

void pilha_push(Pilha* p, int x) {
    struct Pilha* new = (struct Pilha*)malloc(sizeof(struct Pilha));
    if (new == NULL) {
        printf("Error allocating memory!\n");
        return;
    } 

    new->value = x;
    new->top = p;

    printf("The current top value is: %d.\n", new->value);
}

int pilha_vazia(Pilha* p) {
    if (p == NULL) return 1;
    return 0;
}

void pilha_libera(Pilha* p) {
    while (p != NULL) {
        struct Pilha* aux = p->top;
        free(p);
        p = aux;
    }
}
