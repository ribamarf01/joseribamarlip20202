# Atividade 08 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Solução:
```
expr
case_stmt: if (expr) goto case
           if (case_stmt) goto case_stmt
           goto default
default: goto case
case: ...
      goto out
out: ...
```

### Questão 02

Solução:
```
Msw(switch EXPR case EXPR do STMT_LIST, S)
    if Mb(EXPR, S) == undef
        then error
        else if Mb(EXPR, S) == false
            then Msw(switch EXPR case EXPR do STMT_LIST, Msl(STMT_LIST, S))
            else 
                then if Msl(STMT_LIST, S) == error
                    then error
                    else
                        then Msl(STMT_LIST, S)
```