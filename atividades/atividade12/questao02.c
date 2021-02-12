#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int LENGTH = 10000;
static long int COUNT = 100000;

void vetorEstatico() {
    static int vetorEstatico[10000];
}

void criarVetor() {
    int vetorPilha[10000];
}

void vetorNaPilha() {
    criarVetor();
}

void vetorNoMonte() {
    int *vetorMonte;
    vetorMonte = (int *) malloc(sizeof(int) * 10000);
    free(vetorMonte);
}

int main() {
    
    //Primeiro vetor
    clock_t begin = clock();
    for(long int i = 0; i < COUNT; i++) vetorEstatico();
    clock_t end = clock();

    double timeSpent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf("Tempo gasto em segundos com 5 casas decimais, vetor estatico: %.5f\n", timeSpent);

    //Segundo vetor
    begin = clock();
    for(long int i = 0; i < COUNT; i++) vetorNaPilha();
    end = clock();

    timeSpent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf("Tempo gasto em segundos com 5 casas decimais, vetor empilhado: %.5f\n", timeSpent);

    //Terceiro vetor
    begin = clock();
    for(long int i = 0; i < COUNT; i++) vetorNoMonte();
    end = clock();

    timeSpent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf("Tempo gasto em segundos com 5 casas decimais, vetor de monte: %.5f\n", timeSpent);
    
    return 0;
}