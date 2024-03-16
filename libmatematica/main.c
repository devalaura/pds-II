#include <stdio.h>
#include "matematica.h"

int main() {
    float angulo_radianos;
    
    printf("Digite um angulo em radianos:\n");
    scanf("%f", &angulo_radianos);

    float seno = calcular_seno(angulo_radianos);
    float cosseno = calcular_cosseno(angulo_radianos);
    float tangente = calcular_tangente(angulo_radianos);

    printf("O seno do angulo %frad e %f, o cosseno e %f e a tangente e %f.\n", angulo_radianos, seno, cosseno, tangente);
}