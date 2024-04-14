#include "tree.h"

void main() {
    int tree = creates_tree();

    finds_elements(tree);

    print_tree(tree);
    
    free_tree(tree);
    printf("Bye, bye! :)");

}

struct Tree* creates_tree() {
    int value;

    printf("Insert a value different of 0:\nPS: 0 shut down the program!\n");
    scanf("%d", &value);

    if (value == 0) {
        printf("Bye, bye! :)");
        return;
    }

    struct Tree* tree = create_tree(value);

    while (value != 0) {
        if (value == 0) {
            libera_Tree(tree);
            printf("Bye, bye! :)");
            return;
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

    return tree;
}

void finds_elements(struct Tree* tree) {
    int findElement;
    printf("Insert a value to verify if it's in the tree:\nPS: 0 shut down the program!\n");
    scanf("%d", &findElement);

    if (findElement == 0) {
        free_tree(tree);
        printf("Bye, bye! :)");
        return;
    }

    while (findElement != 0) {
        if (findElement == 0) {
            free_tree(tree);
            printf("Bye, bye! :)");
            return;
        }
        
        int found = find_tree_element(tree, findElement);
        
        if (found == 1) {
            printf("The number %d is on the tree!\n", findElement);
            return;
        } 

        printf("The number %d is NOT on the tree!\n", findElement);

        printf("Insert a value to verify if it's in the tree:\nPS: 0 will shut down the program!\n");
        scanf("%d", &findElement);
    }
}