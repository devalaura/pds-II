#include "circle.h"
#include <stdio.h>

void main() {
    Circulo* c1 = circ_cria(1.2, 2.0, 1.0);
    Circulo* c2 = circ_cria(2.2, 1.0, 2.0);
    
    float areaC1 = circ_area(c1);
    printf("O valor da area do primeiro circulo e: %.2f.\n", areaC1);

    float areaC2 = circ_area(c2);
    printf("O valor da area do segundo circulo e: %.2f.\n", areaC2);

    float raioC1 = circ_raio(c1);
    printf("O valor do raio do primeiro circulo e: %.2f.\n", raioC1);

    float raioC2 = circ_raio(c2);
    printf("O valor do raio do segundo circulo e: %.2f.\n", raioC2);

    int concentricos = circ_concentricos(c1, c2);
    if (concentricos == 1) {
        printf("Os circulos sao concentricos!\n");
        circ_libera(c1);
        circ_libera(c2);
        return;
    }

    printf("Os circulos nao sao concentricos!\n");
    circ_libera(c1);
    circ_libera(c2);
    return;
}