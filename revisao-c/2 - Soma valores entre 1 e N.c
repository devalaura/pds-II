#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor maior que 1: \n");
    scanf("%d", &n);

    int somaFor = SomaFor(n);
    printf("A soma executada com FOR resultou: %d. ", somaFor);

    int somaWhile = SomaWhile(n);
    printf("A soma executada com WHILE resultou: %d", somaWhile);
}

int SomaFor(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int SomaWhile(int n) {
    int soma = 0;
    int contador = 1;

    while (contador <= n) {
        soma += contador;
        contador++;
    }

    return soma;
}