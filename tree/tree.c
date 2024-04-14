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

    if (tree->smallest->value > new_value) {
        return push_smallest(tree->smallest, new_value);
    }

    if (tree->value == new_value) {
        printf("Value already inserted! Choose a new value.\n");
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

    if (tree->biggest->value < new_value) {
        return push_biggest(tree->biggest, new_value);
    }

    if (tree->value == new_value) {
        printf("Value already inserted! Choose a new value.\n");
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

int find_tree_element(struct Tree* tree, int value) {
    if (tree->value == value) {
        return 1;
    }

    if (tree->biggest != NULL && tree->value < value) {
        return find_tree_element(tree->biggest, value);
    }

    if (tree->smallest != NULL && tree->value > value) {
        return find_tree_element(tree->smallest, value);
    }

    return 0;
}

void print_tree(struct Tree* tree) {
    if (tree == NULL)
        return;

    printTree(tree->smallest);
    printf("%d, ", tree->value);
    printTree(tree->biggest);

}
