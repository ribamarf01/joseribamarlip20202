#include <stdio.h>

void multiplicaMatriz(int matA[][3], int matB[][3]) {
    int matrizAuxiliar[3][3];
    int temp = 0;
    
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            for(int i = 0; i < 3; i++) temp += matA[linha][i] * matB[i][coluna];
            matrizAuxiliar[linha][coluna] = temp;
            temp = 0;
        }
    }

    printf("Valor da Matriz:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrizAuxiliar[i][j]);        
        }
        printf("\n");
    }

}

void multiplicaMatrizWhile(int matA[][3], int matB[][3]) {
    int temp = 0, linha = 0, coluna = 0, i;
    int matrizAuxiliar[3][3];

    while(linha < 3) {
        coluna = 0;
        while (coluna < 3) {
            i = 0;
            while (i < 3) {
                temp += matA[linha][i] * matB[i][coluna];
                i++;
            }
            matrizAuxiliar[linha][coluna] = temp;
            temp = 0;
            coluna++;
        }
        linha++;
    }

    printf("Valor da Matriz:\n");
    linha = 0, coluna = 0;

    while(linha < 3) {
        while (coluna < 3) {
            printf("%d ", matrizAuxiliar[linha][coluna]);
            coluna++;
        }
        coluna = 0;
        linha++;
        printf("\n");
    }

}

int main() {

    int matA[3][3], matB[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Ler valor da Matriz A em linha %d coluna %d: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Ler valor da Matriz B em linha %d coluna %d: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("Valor da Matriz A:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matA[i][j]);        
        }
        printf("\n");
    }

    printf("Valor da Matriz B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matB[i][j]);  
        }
        printf("\n");
    }

    multiplicaMatriz(matA, matB);
    multiplicaMatrizWhile(matA, matB);

    return 0;
}