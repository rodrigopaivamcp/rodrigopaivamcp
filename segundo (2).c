#include <stdio.h>
#include <math.h>

int main() {
    int X;
    double Y, CONSUMO;

    printf("distancia total percorrida X\n");
    scanf("%d", &X);

    printf("total de combustivel gasto Y\n");
    scanf("%lf", &Y);

    CONSUMO = (X/Y);
    printf("CONSUMO: %.3f\n", CONSUMO);

    return 0;
}

//Rodrigo Marcondes Casseres de Paiva RA:22509503