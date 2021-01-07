# Atividade 03 de Linguagens de Programação 2020.2
# Correção: 1,5 pontos

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Notação do livro:

```
<assign> -> <id> = <expr>
<id> -> A | B | C
<expr> -> <expr> + <term>
    | <term>
<term> -> <term> * <factor>
    | <factor>
<factor> -> (<expr>)
    | <id>
```

### 1. A = (A + B) * C

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <term>
=> A = <term> * <factor>
=> A = <factor> * <factor>
=> A = (<expr>) * <factor>
=> A = (<expr> + <term>) * <factor>
=> A = (<term> + <term>) * <factor>
=> A = (<factor> + <term>) * <factor>
=> A = (<id> + <term>) * <factor>
=> A = (A + <term>) * <factor>
=> A = (A + <factor>) * <factor>
=> A = (A + <id>) * <factor>
=> A = (A + B) * <factor>
=> A = (A + B) * <id>
=> A = (A + B) * C
```

Árvore:

![questao1.1](1.1.png)
### 2. A = B + C + A

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <expr> + <term>
=> A = <expr> + <term> + <term>
=> A = <term> + <term> + <term>
=> A = <factor> + <term> + <term>
=> A = <id> + <term> + <term>
=> A = B + <term> + <term>
=> A = B + <factor> + <term>
=> A = B + <id> + <term>
=> A = B + C + <term>
=> A = B + C + <factor>
=> A = B + C + <id>
=> A = B + C + A
```

Árvore:

![questao1.2](1.2.png)
### 3. A = A + (B + C)

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <expr> + <term>
=> A = <term> + <term>
=> A = <factor> + <term>
=> A = <id> + <term>
=> A = A + <term>
=> A = A + <factor>
=> A = A + (<expr>)
=> A = A + (<expr> + <term>)
=> A = A + (<term> + <term>)
=> A = A + (<factor> + <term>)
=> A = A + (<id> + <term>)
=> A = A + (B + <term>)
=> A = A + (B + <factor>)
=> A = A + (B + <id>)
=> A = A + (B + C)
```

Árvore:

![questao1.3](1.3.png)
### 4. A = B * (C * (A + B))

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <term>
=> A = <term> * <factor>
=> A = <factor> * <factor>
=> A = <id> * <factor>
=> A = B * <factor>
=> A = B * (<expr>)
=> A = B * (<term>)
=> A = B * (<term> * <factor>)
=> A = B * (<factor> * <factor>)
=> A = B * (<id> * <factor>)
=> A = B * (C * <factor>)
=> A = B * (C * (<expr>))
=> A = B * (C * (<expr> + <term>))
=> A = B * (C * (<term> + <term>))
=> A = B * (C * (<factor> + <term>))
=> A = B * (C * (<id> + <term>))
=> A = B * (C * (A + <term>))
=> A = B * (C * (A + <factor>))
=> A = B * (C * (A + <id>))
=> A = B * (C * (A + B))
```

Árvore:

![questao1.4](1.4.png)

### Questão 02

Notação escolhida:
```
<switch_stmt> é a estrutura base para construção do switch;
<value> é o valor que o switch ira checar nos cases;
<reachValue> é o valor salvo do switch que ira ocorrer caso <value> == <reachValue>;
<rule> é a ação que ocorra no switch caso <value> == <reachValue> seja verdadeiro.

<switch_stmt> -> switch (<value>) { <stmt> } 
<stmt> -> case <reachValue>: <rule>; break; <stmt>
        | default: <rule>; break;

Em <stmt> -> case <reachValue>: <rule> break; <stmt> é para o switch continuar a receber quantos casos o programador quiser colocar e para receber um default (caso final do switch, caso todos os outros não sejam verdadeiros) sem quebrar a notação.
```
