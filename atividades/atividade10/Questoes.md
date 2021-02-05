# Atividade 10 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687
### Correção: 2,0

### Questão 01
Problema 28 do Capítulo 03 do Livro.

Prove que o seguinte trecho de programa está correto:

```
{n > 0}
count = n;
sum = 0;
while count < > 0 do
   sum = sum + count;
   count = count - 1;
end
{sum = 1 + 2 + ... + n}
```

Solução:
```
1º Iteração:
sum.S1:    0 + n
count.S1:  n
sum.S2:    0 + n
count.S2:  n - 1

2º Iteração:
sum.S1:    0 + n + (n - 1)
count.S1:  n - 1
sum.S2:    0 + n + (n - 1)
count.S2:  n - 2

3º Iteração:
sum.S1:    0 + n + (n - 1) + (n - 2)
count.S1:  n - 2
sum.S2:    0 + n + (n - 1) + (n - 2)
count.S2:  n - 3

{(sum = (count + 1) + (count + 2) + ... + (n - 1) + n) && (count > 0)} = I

{I && B} S1; S2 {I}
count = count - 1;
{(sum = (count + 1) + (count + 2) + ... + (n - 1) + n) && (count > 0)};


P = {(count) + (count + 1) + ... + (n - 1) + n} && (count >= 1)
B = (count <> 0)

S1: sum = sum + count; {(sum = count + (count + 1) + ... + n) && (count >= 1)}
{sum = ((count + 1) + ... + n) && (count >= 1)}
```
                        
### Questão 02

Converta o analisador léxico (escrito em C) da seção 4.2 do livro texto para Python. Este programa precisa ser executável e tratar a expressão (sum+47)/total da mesma forma que a saída mostrada ao final da seção 4.2 .

```
tokens = {
    'EOF': -1,
    'INT': 10,
    'IDENT': 11,
    '=': 20,
    '+': 21,
    '-': 22,
    '*': 23,
    '/': 24,
    '(': 25,
    ')': 26
}

arquivo = open("front.in", "r")
linha = arquivo.readline()

while linha:
    valores = linha.split()
    for char in range(len(valores)):

        if valores[char].isdigit():
            print(f"Next token is: {tokens['INT']}, Next lexeme is {valores[char]}")
        elif valores[char].isalpha():
            print(f"Next token is: {tokens['IDENT']}, Next lexeme is {valores[char]}")
        else:
            print(f"Next token is: {tokens[valores[char]]}, Next lexeme is: {valores[char]}")

                
    linha = arquivo.readline()
    print(f"Next token is: {tokens['EOF']}, Next lexeme is EOF")
```

Arquivo: front.py
Execução: !['execução'](./Capturar.png)
