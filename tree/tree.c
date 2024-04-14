#include "tree.h"

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Tree* create_tree(int value) {
    struct Tree* t = (struct Tree*)malloc(sizeof(struct Tree));

    if (t == NULL) {
        printf("Error allocationg memory!");
        return t;
    } 

    t->value = value;
    t->smallest = NULL;
    t->biggest = NULL;

    return t;
}

void push_smallest(struct Tree* tree, int new_value) {
    struct Tree* new = (struct Tree*)malloc(sizeof(struct Tree));
    if (new == NULL) {
        printf("Error allocating memory!\n");
        return;
    } 

    new->value = new_value;
    new->biggest = tree;
    new->smallest = NULL;

}

void push_biggest(struct Tree* tree, int new_value) {
    struct Tree* new = (struct Tree*)malloc(sizeof(struct Tree));
    if (new == NULL) {
        printf("Error allocating memory!\n");
        return;
    } 

    new->value = new_value;
    new->biggest = NULL;
    new->smallest = tree;

}

void free_tree(struct Tree* tree) {
    while (tree != NULL) {
        struct Tree* auxbiggest = tree->biggest;
        free(tree);
        free(tree->smallest);
        tree = auxbiggest;
    }
}
