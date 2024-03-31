#include "stack.h"
#include <stdio.h>

void main() {
    int value;

    printf("Choose a new value, diferent of 0, to start the stack: \nPS.: To terminate the program, choose 0.\n");
    scanf("%d", &value);

    Pilha* p = pilha_cria(value);

    while (value != 0)
    {
        int menu;
        printf("Choose a menu option:\n1 - Push an element;\n2 - Pop an element;\n3 - Verify if stack's empty.\n0 - Exit.\n");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Choose a new value, diferent of 0, to the stack element: \nPS.: To terminate the program, choose 0.\n");
                scanf("%d", &value);
                if (value == 0) break;

                pilha_push(p, value);
                break;

            case 2:
                pilha_pop(&p);
                break;

            case 3:
                if (pilha_vazia(p) == 1) {
                    printf("The stack's empty!\n");
                    break;
                }
                printf("The stack's not empty!\n");
                break;

            case 0:
                value = 0;
                break;

            default:
                printf("Invalid option, choose again!\n"); 
                break;
        }
    }

    pilha_libera(p);
    printf("bye, bye! :)");
    return;
}