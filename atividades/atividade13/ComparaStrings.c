#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void estaContida(char str1[], char str2[]) {
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);

    bool found = false;

    for (int i = 0; i < tam1; i++) {

        if (str1[i] == str2[0]) {
            int check = 1;
            for (int j = 1; j < tam2; j++) {
                if (str1[i + j] == str2[j]) check++;
            }

            if(check == tam2) {
                found = true;
                break;
            }

        }

    }

    if(found) printf("%s contém %s\n", str1, str2);
    else printf("%s não contém %s\n", str1, str2);
}

void inverter(char str[]) {
    int j = strlen(str) - 1;
    int i = 0;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s \n", str);
}

int main(int argc, char *argv[]) {

    int tam1 = strlen(argv[1]);
    int tam2 = strlen(argv[2]);

    char str1[tam1], str2[tam2];

    strcpy(str1, argv[1]);
    strcpy(str2, argv[2]); 

    printf("%s: %d\n", str1, tam1);
    printf("%s: %d\n", str2, tam2);

    estaContida(str1, str2);
    estaContida(str2, str1);

    inverter(str1);
    inverter(str2);

    return 0;
}