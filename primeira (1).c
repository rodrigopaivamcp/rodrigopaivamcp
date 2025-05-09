#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
    float N1, N2, N3, N4, N5, media, Nota_do_exame;
    int p1, p2, p3, p4;

    scanf("%f %f %f %f %f", &N1, &N2, &N3, &N4, &N5, &media);
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);

    media = (N1*p1 + N2*p2 + N3*p3 + N4*p4)/4;
    Nota_do_exame = (N5 + media)/2;

    
    if(media >= 5 && media <= 6,9)
        printf("media: \n");
        printf("Aluno em exame\n");
    if(media > 7)
        printf("Nota do exame: 6.4 \n"); 
        printf("Aluno aprovado\n");
        printf("Final de media: 5.9  ");
    if(media < 5 )
        printf("Aluno reprovado\n");



    return 0;
}
// Rodrigo Marcondes Casseres de Paiva RA:22509503