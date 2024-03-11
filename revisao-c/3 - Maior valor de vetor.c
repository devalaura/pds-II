#define TAMANHO_VETOR 10
#define VETOR {1, 22, 43, 14, 50, 16, 12, 88, 90, 34}

int main() {
    int vetor[TAMANHO_VETOR] = VETOR;

    int maiorValor = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    return maiorValor;
}