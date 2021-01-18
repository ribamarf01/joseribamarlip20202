# Atividade 06 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687
## Correção: 1,5

### Questão 01

Traduza a gramática da Atividade 05 para a notação EBNF.

Gramática da atividade 05:
```
<LEXP> → <ÁTOMO> | <LISTA>
<ÁTOMO> → número | identificador
<LISTA> → ( <LEXP-SEQ> )
<LEXP-SEQ> → <LEXP-SEQ> <LEXP> | <LEXP>
```

EBNF:
```
<LEXP> → <ATOMO> 
       | <LISTA>  
<ATOMO> → Número 
       | Identifcador
<LISTA> → '(' <LEXP-SEQ> ')'
<LEXP-SEQ> → <LEXP> { <LEXP> }
