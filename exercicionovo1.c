#include <stdio.h>
#include <math.h>

int main()  {

    int hora_inicial, minuto_inicial, hora_final, minuto_final;

    scanf("%d%d%d%d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    if ((hora_inicial < 12 && minuto_inicial < 60) && (hora_final < 12 && minuto_final < 60)) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
            abs(abs(hora_inicial - 12 && minuto_inicial - 60 + 60) - (hora_final - 12 && minuto_final - 60 + 60)));
    }
    if (hora_inicial==0 && hora_final==0 || hora_inicial==hora_final) {
        printf("O JOGO DUROU 24 HORAS(S) E %d MINUTO(S)\n");
    }
    if ((hora_inicial < 12 && minuto_inicial < 60) && (hora_final > 12 && minuto_final <60)) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
        abs(abs(hora_inicial + 12 && minuto_inicial - 60 + 60)-(hora_final + 12 && minuto_final + 59 - 59)));
    }




    return 0;
}
//Rodrigo Marcondes Casseres de Paiva RA:22509503