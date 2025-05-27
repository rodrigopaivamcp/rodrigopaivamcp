#include <stdio.h>

int main() {
    int x, y;

    printf("Digite as coordenadas (X,Y)\n");

    while (1) {
        printf("Coordenadas: ");
        scanf("%d %d", &x, &y);

       
        if (x == 0 || y == 0) {
            printf("\n");
            break;
        }

       
        if (x > 0 && y > 0) {
            printf("primeiro\n");
        } else if (x < 0 && y > 0) {
            printf("segundo\n");
        } else if (x < 0 && y < 0) {
            printf("terceiro\n");
        } else if (x > 0 && y < 0) {
            printf("quarto\n");
        }
    }

    return 0;
}
// Rodrigo Marcondes Casseres de Paiva RA:22509503