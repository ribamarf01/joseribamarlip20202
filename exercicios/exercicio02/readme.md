# Exercício 02 de Linguagens de programação

## Nome: José Ribamar Silva Soares Filho
## Matrícula: 472687

## Data: 09/12/2020

Gramática do livro:

```
<assign> -> <id> = <expr>
<id> -> A | B | C
<expr> -> <id> + <expr>
        | <id> * <expr>
        |(<expr>)
        | <id>
```

### Questão 01
A = A * (B + (C * A))

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <id> * <expr>
=> A = A * <expr>
=> A = A * (<expr>)
=> A = A * (<id> + <expr>)
=> A = A * (B + <expr>)
=> A = A * (B + (<expr>))
=> A = A * (B + (<id> * <expr>))
=> A = A * (B + (C * <expr>))
=> A = A * (B + (C * <id>))
=> A = A * (B + (C * A))
```
Árvore:
![questao01](questao01.png)

### Questão 02
B = C * (A * C + B)

Derivação:
```
<assign> => <id> = <expr>
=> B = <expr>
=> B = <id> * <expr>
=> B = C * <expr>
=> B = C * (<expr>)
=> B = C * (<id> * <expr>)
=> B = C * (A * <expr>)
=> B = C * (A * <id> + <expr>)
=> B = C * (A * C + <expr>)
=> B = C * (A * C + <id>)
=> B = C * (A * C + B)
```
Árvore:
![questao02](questao02.png)

### Questão 03
A = A * (B + (C))

Derivação: 
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <id> * <expr>
=> A = A * <expr>
=> A = A * (<expr>)
=> A = A * (<id> + <expr>)
=> A = A * (B + <expr>)
=> A = A * (B + (<expr>))
=> A = A * (B + (<id>))
=> A = A * (B + (C))
```
Árvore:
![questao03](questao03.png)