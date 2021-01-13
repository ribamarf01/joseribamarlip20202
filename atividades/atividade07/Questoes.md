# Atividade 07 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 1

Com base no exemplo acima, escreva uma gramática de atributos para o valor ponto flutuante de um número dado pela gramática a seguir:

```
<NÚMERO_REAL> → <NÚMERO> , <NÚMERO> 
<NÚMERO> → <NÚMERO> <DÍGITO> | <DÍGITO>
<DÍGITO> → 0|1|2|3|4|5|6|7|8|9
```       

Para entender melhor essa questão, considere o número 72,351 . Faça a derivação e construa a árvore para este número. Imagine que essa representação, 72,351 , é a representação textual do número. Você precisa definir um atributo, que deve ser atrelado ao símbolo <NÚMERO_REAL>, que represente o valor numérico equivalente a sentença 72,351 .

Derivação:

```
<NÚMERO_REAL> => <NÚMERO> , <NÚMERO>
=> <NÚMERO> <DÍGITO> , <NÚMERO>
=> <DÍGITO> <DÍGITO> , <NÚMERO>
=> 7 <DÍGITO> , <NÚMERO>
=> 7 2 , <NÚMERO>
=> 7 2 , <NÚMERO> <DÍGITO>
=> 7 2 , <NÚMERO> <DÍGITO> <DIGÍTO>
=> 7 2 , <DIGÍTO> <DÍGITO> <DIGÍTO>
=> 7 2 , 3 <DIGITO> <DIGITO>
=> 7 2 , 3 5 <DIGITO>
=> 72,351
```

Árvore:

![arvore](arvore.png)

Gramática de Atributos:

```
1. Regra sintática: <NÚMERO_REAL> → <NÚMERO> , <NÚMERO>

Regra semântica: <NÚMERO_REAL>.actual_type ← 
if (<NÚMERO>.actual_type == int) 
    then real 
end if

Predicado: <NÚMERO>.expected_type == int

2. Regra Sintática: <NÚMERO> → <NÚMERO> <DÍGITO> | <NÚMERO>

Regra Semântica: <DÍGITO>.expected_type ← <NÚMERO>.actual_type

3. Regra sintática:
<DÍGITO> → 0|1|2|3|4|5|6|7|8|9

Regra semântica: <DÍGITO>.actual_type  ← lookup(DIGITO.string)
```
