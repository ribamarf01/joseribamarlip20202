#include <stdio.h>

int main(int argc, char *argv[]) {

    // Como um número inteiro tem 4 bytes de tamanho, e cada byte possui 8 bits, onde cada bit pode armazenar o valor de 0 e 1 ou 2 valores, o maior tamanho de um inteiro é 2^4*8 = 2^32
    // Com isso em mente, temos que tirar o bit de sinal, logo 2^31, como o 0 possui duas representações, consideramos perder 2 representações ou atribuir 0 como inteiro positivo perdendo apenas uma, logo:
    // O total de representações de um inteiro será (2^31 - 1).
    int mod = atoi(argv[1]);
    int inteiro = 2;

    // Fazer a potencia
    for(int j = 0; j < 29; j++) inteiro *= 2; // Para evitar um overflow, elevar ate 30, e fazer a proxima elevação manualmente, como são apenas multiplos de 2, posso somar duas vezes ele mesmo

    // Subtrair por 1
    inteiro = inteiro + (inteiro - 1); 
    // A partir desse valor, o proximo binario se confunde por necessitar de um bit de sinal e imprime o valor negativo, então seria necessário mais um bit, 
    // o que extrapolaria o limite dos inteiros comuns.

    for (;;) { // Calcula o divisor inteiro do número.
        if (inteiro % mod == 0) break;
        else inteiro--;
    }

    printf("Maior Múltiplo: %d", inteiro);

}