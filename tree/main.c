#include "tree.h"

void main() {
    int value;

    printf("Insert a value different of 0:\nPS: 0 shut down the program!\n");
    scanf("%d", &value);

    if (value == 0) {
        printf("Bye, bye! :)");
    }

    struct Tree* tree = create_tree(value);

    while (value != 0) {
        if (value == 0) {
            libera_Tree(tree);
            printf("Bye, bye! :)");
        }

        if (tree->value > value) {
            push_smallest(tree, value);
        } else if (tree->value < value) {
            push_biggest(tree, value);
        } else if (tree->value == value) {
            printf("Value already inserted! Choose a new value.");
        }

        printf("Insert a value different of 0:\nPS: 0 will shut down the program!\n");
        scanf("%d", &value);
    }
    
    free_tree(tree);
    printf("Bye, bye! :)");

}