# Atividade 08 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Solução:
```
switch: expr; 
        goto case_stmt
case_stmt: if (expr1 == expr) goto case1
           if (expr2 == expr) goto case2
           ...
           if (exprN == expr) goto caseN
           goto default
case1: ...
      goto out
case2: ...
      goto out
caseN: ...
      goto out
default: ...
      goto out
out: ...
```

### Questão 02

Solução:

```
Msw(switch(<expr>) { <case_stmt> }, S)
    if Me(<expr>, S) == Me(<case_stmt>.<expr>)
        then Msl(<case_stmt>.<stmt_list>, S)
        else if Msl(<case_stmt>.<case_stmt>) == undef
            then Msl(default.<stmt_list>, S)
            else 
                then Msw(switch (<expr>) { <case_stmt> }, Msl(<case_stmt>.<case_stmt>, S)) 
```