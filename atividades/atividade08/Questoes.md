# Atividade 08 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Solução:
```
expr1 // Atribuição de valor a variável que será testada no switch. Ex.: x = 10.
case_stmt: if (expr2) goto case // Se expr2 for verdadeiro, entra no case. expr2 é usado para comparar o valor de expr1 com expr2.
           goto case_stmt // Senão chama outro case_stmt
case: ...
      goto out
out: ...
```

**Comentário**: Está estranho. Por exemplo:

```
if (case_stmt) goto case_stmt
```

_case_stmt_ é uma expressão ou um rótulo? Veja o seguinte. Para cada _case_ você tem uma expressão associada. No exemplo do **for** no livro, tem:

```
loop: if expr2 == 0 goto out
```

Então você pode comparar expressões a valores, assim como expressões entre si. Então teremos uma sequência de expressões que caso sejam iguais a uma expressão base,
levam a um **goto** para um rótulo _case_ correspondente. Você pode representar as expressões como _expr1_, _expr2_, _expr3_, ..., _exprN_, etc.


### Questão 02

Solução:

```
Msw(switch(<expr>) { <case_stmt> }, S)
    if Mb(<case_stmt>.<default>) // Checa se é o case default
        then Msl(<case_stmt>.<stmt_list>, S)
        else if Me(<expr>, S) == Me(<case_stmt>.<expr>) // Compara o valor de <expr> com <case_stmt>.<expr>
            then Msl(<case_stmt>.<stmt_list>, S) // Se verdadeiro, retorna a lista de comandos do case
            else 
                then Msw(<expr>, Msl(<case_stmt>.<case_stmt>, S)) // Senão retorna a função, mandando novamente a expressão e atualizando o estado para o proxímo case.
```

**Comentário**:

Por que você está fazendo essa comparação:

```
else if Mb(EXPR, S) == false
```

EXPR é uma expressão _booleana_? Há dois EXPR, então fica confuso. Dê um nome específico para cada um deles. Tipo EXPR_BASE, etc. E onde está a análise da sequência de CASEs?
A impressão que fica é que seu _switch_ tem apenas um _case_. Também não existe essa palavra reversada **do** no _switch_ do C. 

Minha sugestão: faça uma gramática BNF para o _switch_ do C. Você já fez uma em uma atividade anterior:

```
<switch_stmt> -> switch (<value>) { <stmt> } 
<stmt> -> case <reachValue>: <rule>; break; <stmt>
        | default: <rule>; break;
```

Eu rescreveria para:

```
<switch_stmt> -> switch (<expr>) { <case_stmt> } 
<case_stmt>   -> case <expr>: <stmt_list>; break; <case_stmt>
               | default: <stmt_list>; break;
```

Então considere que sua Msw é: 

```
Msw(switch (<expr>) { <case_stmt> })
```

E você pode acessar os elementos de _<case_stmt>_ usando _<case_stmt>.\<expr>_, _<case_stmt>.<stmt_list>_ e _<case_stmt>.<case_stmt>_. Daí você poderia fazer como:

```
if Me(<expr>, s) == Me(<case_stmt>.<expr>, s) then Msl(<case_stmt>.<stmt_list>, s)
```

Agora teria que tratar os outros _cases_. 
