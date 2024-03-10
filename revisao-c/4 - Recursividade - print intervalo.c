#define INICIO 0
#define FIM 10

#include <stdio.h>

int main() {
    print(INICIO, FIM);
}

void print(int inicio, int fim) {
    if (fim >= inicio) {
        printf("%d\n", fim);
        fim -= 1;
        print(inicio, fim);
    } 
}