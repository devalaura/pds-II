#define _USE_MATH_DEFINES

#include "circle.h"
#include <malloc.h>
#include <math.h>

struct Circulo
{
    float coordenadas[2];
    float raio;
};

Circulo* circ_cria(float x, float y, float r) {
    struct Circulo* circle = (struct Circulo*)malloc(sizeof(struct Circulo));
    
    circle->coordenadas[0] = x;
    circle->coordenadas[1] = y;
    circle->raio = r;

    return circle;
}

void circ_libera(Circulo *c) {
    free(c);
}

float circ_area(Circulo *c) {
    float pi = M_PI;
    float raio = c[0].raio;

    float area = pi * pow(raio, 2);

    return area;
}

int circ_concentricos(Circulo *c1, Circulo *c2) {
    float xC1 = c1[0].coordenadas[0];
    float yC1 = c1[0].coordenadas[1];

    float xC2 = c2[0].coordenadas[0];
    float yC2 = c2[0].coordenadas[1];

    if (xC1 == xC2 && yC1 == yC2) return 1;

    return 0;
}

float circ_raio(Circulo *c) {
    return c[0].raio;
}