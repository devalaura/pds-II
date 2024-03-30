#include "stack.h"
#include <stdio.h>

void main() {
    int value;

    printf("Choose a new value, diferent of 0, to the stack element: \n PS.: To terminate the program, choose 0.\n");
    scanf("%d", &value);

    Pilha* p = pilha_cria(value);

    while (value != 0)
    {
        printf("Choose a new value, diferent of 0, to the stack element: \n PS.: To terminate the program, choose 0.\n");
        scanf("%d", &value);

        int menu;
        printf("Choose a menu option:\n1 - Push an element;\n2 - Pop an element;\n3 - Verify if stack's empty.");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                pilha_push(p, value);
                break;

            case 2:
                pilha_pop(p);
                break;

            case 3:
                int result = pilha_vazia(p);
                if (result == 1) {
                    printf("The stack's empty!\n");
                    break;
                }
                printf("The stack's not empty!\n");
                break;
            
            default:
                printf("Invalid option, start again!"); 
                break;
        }

    }
    
}