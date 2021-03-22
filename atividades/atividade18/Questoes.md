# Atividade 18 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Questão em C/C++:

```
#include <iostream>

int main() {
    int k, j;
    scanf("%d", &j);
    k = (j + 13) / 27;

    while(k > 10) {
        k = k + 1;
        i = 3 * k + 1;
    }
}
```

Questão em Python:

```
j = int(input());
k = (j + 13) / 27
while k > 10:
    k = k + 1
    i = 3 * k + 1
```

### Questão 02

Questão em C/C++:
```
#include <iostream>

int main() {
    int k, j;
    scanf("%d", &k);

    switch(k){
        case 1:
        case 2:
            j = 2 * k - 1;
            break;
        case 3:
        case 5:
            j = 3 * k + 1;
            break;
        case 4:
            j = 4 * k - 1;
            break;
        case 6:
        case 7:
        case 8:
            j = k - 2;
            break;
    }

}
```

Questão em Python:

```
j = 0;
k = int(input())

if k == 1 or k == 2:
    j = 2 * k - 1
elif k == 3 or k == 5:
    j = 3 * k + 1
elif k == 4:
    j = 4 * k - 1;
elif k == 6 or k == 7 or k == 8:
    j = k - 2;
```

### Questão 03

```
j = -3;

for (int i = 0; i < 3; i++) {

    if((j + 2) == 3 || (j + 2) == 2) j--;
    else if ((j + 2) == 0) j += 2;
    else j = 0;

    if(j > 0) i == 3;
    
    j = 3 - i;
}
```