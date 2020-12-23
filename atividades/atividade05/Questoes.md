# Atividade 05 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01:

Notação:
```
<LEXP> → <ÁTOMO> | <LISTA>
<ÁTOMO> → número | identificador
<LISTA> → ( <LEXP-SEQ> )
<LEXP-SEQ> → <LEXP-SEQ> <LEXP> | <LEXP>
```

### 1. Escreva derivações à esquerda e à direita para a sentença (a 23 (m x y)).

Derivação a esquerda: 
```
<LEXP> => <ATOMO> | <LISTA>
=> <LISTA>
=> ( <LEXP-SEQ> )
=> ( <LEXP-SEQ> <LEXP> )
=> ( <LEXP-SEQ> <LEXP> <LEXP> )
=> ( <LEXP> <LEXP> <LEXP> )
=> ( <ATOMO> <LEXP> <LEXP> )
=> ( a <LEXP> <LEXP> )
=> ( a <ATOMO> <LEXP> )
=> ( a 23 <LEXP> )
=> ( a 23 <LISTA> )
=> ( a 23 ( <LEXP-SEQ> ) )
=> ( a 23 ( <LEXP-SEQ> <LEXP> ) )
=> ( a 23 ( <LEXP-SEQ> <LEXP> <LEXP> ) )
=> ( a 23 ( <LEXP> <LEXP> <LEXP> ) )
=> ( a 23 ( <ATOMO> <LEXP> <LEXP> ) )
=> ( a 23 ( m <LEXP> <LEXP> ) )
=> ( a 23 ( m <ATOMO> <LEXP> ) )
=> ( a 23 ( m x <LEXP> ) )
=> ( a 23 ( m x <ATOMO> ) )
=> ( a 23 ( m x y ) )
```

Derivação a direita:
```
<LEXP> => <ATOMO> | <LISTA>
=> <LISTA>
=> ( <LEXP-SEQ> )
=> ( <LEXP-SEQ> <LEXP> )
 => ( <LEXP-SEQ> <LISTA> )
 => ( <LEXP-SEQ> ( <LEXP-SEQ> ) )
 => ( <LEXP-SEQ> ( <LEXP-SEQ> <LEXP> ) )
 => ( <LEXP-SEQ> ( <LEXP-SEQ> <LEXP> ) )
 => ( <LEXP-SEQ> ( <LEXP-SEQ> <LEXP> <LEXP> ) )
 => ( <LEXP-SEQ> ( <LEXP> <LEXP> <LEXP> ) )
 => ( <LEXP-SEQ> ( <ATOMO> <LEXP> <LEXP> ) )
 => ( <LEXP-SEQ> ( m <LEXP> <LEXP> ) )
 => ( <LEXP-SEQ> ( m <ATOMO> <LEXP> ) )
 => ( <LEXP-SEQ> ( m x <LEXP> ) )
 => ( <LEXP-SEQ> ( m x <ATOMO> ) )
 => ( <LEXP-SEQ> ( m x y ) )
 => ( <LEXP-SEQ> <LEXP> ( m x y ) )
 => ( <LEXP> <LEXP> ( m x y ) )
 => ( <ATOMO> <LEXP> ( m x y ) )
 => ( a <LEXP> ( m x y ) )
 => ( a <ATOMO> ( m x y ) )
 => ( a 23 ( m x y ) )
```

### 2. Desenhe uma árvore de análise sintática para a sentença do item anterior.

![arvore](arvore.png)