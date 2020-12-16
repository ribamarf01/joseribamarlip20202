# Exercício 03 de Linguagens de programação

## Nome: José Ribamar Silva Soares Filho
## Matrícula: 472687

## Data: 09/12/2020

## Questão 01

Prove que a seguinte gramática é ambígua:

```
<S> -> <A>
<A> -> <A> + <A> | <id>
<id> -> a | b | c
```

Para essa prova, vou utilizar a expressão "a + b + c"

Construção 01:
```
<S> => <A>
=> <A> + <A>
=> <id> + <A>
=> a + <A>
=> a + <A> + <A>
=> a + <id> + <A>
=> a + b + <A>
=> a + b + <id>
=> a + b + c
```

Árvore 01:

![arvore01](arvore01.png)

Construção 02:
```
<S> => <A>
=> <A> + <A>
=> <A> + <A> + <A>
=> <id> + <A> + <A>
=> a + <A> + <A>
=> a + <id> + <A>
=> a + b + <A>
=> a + b + <id>
=> a + b + c
```

Árvore 02:

![arvore02](arvore02.png)

## Questão 02

 Considere a seguinte gramática de atributos (Exemplo 3.6  da Seção 3.4.5):

 1. Regra Sintática: 
    ``` 
    <assign>  →  <var> = <expr>
    ```
 
    Regra semântica: 
    ```
    <expr>.expected_type ← <var>.actual_type
    ```  


 2. Regra sintática:
    ``` 
    <expr> → <var>[2] + <var>[3] 
    ```
    
    Regra semântica: 
    ```
    <expr>.actual_type ←
                        if (<var>[2].actual_type = int) and
                             (<var>[3].actual_type = int)
                            then int
                            else real
                            end if
    ``` 

 3. Regra sintática:
    ```
    <expr> → <var> 
    ```
    Regra semântica:
    ```
    <expr>.actual_type ← <var>.actual_type
    ```
    Predicado:
    ```
    <expr>.actual_type == <expr>.expected_type
    ```
 4. Regra sintática:
    ```
    <var> → A | B | C 
    ```
    Regra semântica:
    ```
     <var>.actual_type ← look-up(<var>.string)
    ```

A função _lookup_ busca um dado nome de variável na tabela de símbolos e retorna o tipo de dessa variável.

Você deve alterar as regras dessa gramática de atributos para as seguintes:

* Os tipos de dados não podem ser misturados nas expressões.

Deve-se alterar a semântica na regra 2.

    <expr>.actual_type ←
                        if (<var>[2].actual_type = int) and (<var>[3].actual_type = int)
                            then int
                        else if (<var[2]>.actual_type = real) and (<var>[3].actual_type = real)
                            then real
                        end if

E adicionar um predicado a regra.

        <var>[2].actual_type == <var>[3].actual_type
        
* As sentenças de atribuição não precisam ter os mesmos tipos em ambos os lados do operador de atribuição.

    ```
    <expr>.actual_type == <expr>.expected_type
    ```

O predicado da regra 3 deve retornar um verdadeiro ou falso. Verdadeiro caso os tipos sejam iguais e falso caso contrário, para adequar essa regra ao que a questão pede, o predicado não precisa retornar nada ou não existir.
