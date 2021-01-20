# Exercício 05 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01 (Itens _a_ e _c_ do Problema 23 do Capítulo 03 do Livro)

Compute a pré-condição mais fraca para cada uma das seguintes sentenças de atribuição e pós-condições:

1. ``` a = 2 * (b - 1) - 1 { a > 0 } ```
2. ``` a = a + 2 * b - 1 { a > 1 } ```

Solução:
1. 
```
2 * (b - 1) - 1 > 0
2b - 2 - 1 > 0
2b - 3 > 0
2b > 3
Pre: {b > 3 / 2}
```

2.
```
a + 2 * b - 1 > 1
a + 2b - 1 > 1
a + 2b > 2
b > 2 - a / 2
Pre: {b > 2- a / 2}
```

### Questão 02 (Item _a_ do Problema 24 e Item _a_ do Problema 25, ambos do Capítulo 03 do Livro)

Compute a pré-condição mais fraca para a sequência e seleção a seguir, com suas respectivas pós-condições:

1. 
``` 
a = 2 * b + 1;
b = a - 3;
{ b < 0 }
```

2. 
```
if (a == b)
   b = 2 * a + 1;
else
   b = 2 * a;
{ b > 1 }
```

Solução:

1.
```
Pos1: 
a - 3 < 0
{a < 3}

Pre1:
2 * b + 1 < 3
2b < 2
b < 2 / 2
{b < 1}

Logo: {b < 1} a = 2 * b + 1 {b < 3} b = a - 3 {b < 0}
```
2.
```
then:
2 * a + 1 > 1
2a + 1 > 1
2a > 1 - 1
{a > 0}

else:
2 * a > 1
{a > 1 / 2}

```