#include <stdio.h>

int main() {
    int a = 100;
    int b = 200;

    printf("Os numeros sao A = %d e B = %d.\n", a, b);

    TrocaValores(&a, &b);

    printf("Apos a troca, os valores sao A = %d e B = %d.", a, b);
}

void TrocaValores(int *a, int *b) {
    int aux = *a;

    *a = *b;
    *b = aux;
}