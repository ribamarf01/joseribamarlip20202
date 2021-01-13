# Exercício 04 de Linguagens de Programação 2020.2

## Nome: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Usando as instruções de máquina virtual dadas na seção 3.5.1.1, dê uma definição de semântica operacional para a construção do-while da Linguagem Java.

As instruções de máquina virtual disponíveis são:

- if
- goto
- rótulos ou labels

Como exemplo do do-while, considere o seguinte trecho de código:

```
do {
   i = i + 1;    // expr1
   x = 2 * i;    // expr2
} while (i < 10) // expr3
```

Resolução:

```
do: expr1;
    expr2;
    if (expr3) goto do
out: ...`
```

### Questão 02

Resolução:
```
Mdw(do <stml_list> while <expr_>, <state_>)
    if (Msl(<stmt_list>, <state_>) == error) 
        then error
        else Δ = if Mb(<stmt_list>, <state_>) == undef
            then error
            else if Mb(<stmt_list>, <state_>) == false 
                then <state_>
                else Mdw(do <stml_list> while <expr_>, <state_>)
```

