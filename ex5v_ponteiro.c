//Exercicio 5 - Vetores - ED
#include <stdio.h>
#include <stdlib.h>

#define TAM 30

int main () {
    int v[TAM], i;
    float soma = 0;
    double *enSoma;
    int *enV;
    enSoma = &soma;
    enV = v;
    for (i = 0; i < TAM; i++){
        enV[i] = rand() % 100;
        printf("%d - ", enV[i]);
    }
    for (i = 0; i < TAM; i++){
        *enSoma = *enSoma + v[i];
    }

    printf("\nMedia Aritmetica: %.2f\n", *enSoma/TAM);
    return 0;
}