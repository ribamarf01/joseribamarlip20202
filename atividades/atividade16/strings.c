#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int countStringLen(char *str) {
    int count = 0;

    for(;;) {
        if(*(str + count) == '\0') break;
        else count++;
    }
    return count;
}

bool equalString(char *string1, char *string2) {

    if(countStringLen(string1) != countStringLen(string2)) return false;
    
    int count = countStringLen(string1);

    for (int i = 0; i < count; i++) {
        if(*(string1 + i) != *(string2 + i)) return false;
    }

    return true;
}

char *strConcat(char *string1, const char *string2) {
    int count = countStringLen(string1);
    char *str = string1 + count;
    count = 0;
    while(*(string2 + count) != '\0') {
        *(str + count) = *(string2 + count);
        count++;
    }
    *(str + count) = '\0';
} 

int main(int argc, char *argv[]) {
    char *str1, *str2;
    
    str1 = *(argv + 1);
    str2 = *(argv + 2);

    printf("Tamanho da primeira palavra: %d\n", countStringLen(str1));
    printf("Tamanho da segunda palavra: %d\n", countStringLen(str2));

    if(equalString(str1, str2)) printf("Iguais!\n");
    else printf("Nao iguais\n");

    strConcat(str1, str2);

    int count = 0;      
    while (*(str1 + count) != '\0') {
        printf("%c", *(str1 + count));
        count++;
    }
    
    free(str1);
    free(str2); 
    return 0;
}

/* 

    1. Em C++, é permitido a conversão dos tipos númericos entre si(int, double, float), sem conversão, inclusive, é possivel atribuir um tipo com virgula a um inteiro,
    porém apenas a parte antes da virgula é atribuida a variável. Em Java, a conversão de double ou float para inteiro, não é possível como em C++, porém o contrário (inteiro para double ou float é permitido).

    2. Em C#, é possível utilizar-se de variáveis sem tipagem(var), o que permite atribuições a tipos que var assume (Se var = 5, é possível int = var), em Java, isso não é possível, poís a tipagem não permite variáveis sem tipo.

*/