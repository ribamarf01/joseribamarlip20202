# Exercício 07 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Considere a gramática:

```
S -> aAb | bBA 
A -> ab | aAB 
B -> aB | b
```

Considerando a forma sentencial à direita aaAbb, desenhe uma árvore de análise sintática e mostre as frases e frases simples, assim como o manipulador.

Forma sentencial:

```
S => aAb
=> aaABb
=> aaAbb
```

Frases: => aAb
        => aAB
        => b
        
Frase simples: aAb

Manipulador:

Árvore:

!['arvore01'](./arvore1.png)

### Questão 02

Considere a gramática:

```
S -> AbB | bAc 
A -> Ab | aBB 
B -> Ac | cBb | c
```

Considerando a forma sentencial à direita aAcccbbc, desenhe uma árvore de análise sintática e mostre as frases e frases simples, assim como o manipulador.

Forma sentencial:

```
S => AbB
=> Abc
=> aBBbc
=> aBcBbbc
=> aBccbbc
=> aAcccbbc
```

Árvore:

!['arvore02'](./arvore2.png)

Manipulador: 

Frases: => AbB
        => c
        => b
        => ccb
        => aAcccb
        => Ac

Frase simples: AbB