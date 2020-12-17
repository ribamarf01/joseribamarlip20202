# Atividade 04 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01

Enunciados:

- Converta a BNF do Exemplo 3.1 para EBNF.

    Notação BNF:
    ```
    <program> → begin <stmt_list> end
    <stmt_list> → <stmt>
                | <stmt> ; <stmt_list>
    <stmt> → <var> = <expression>
    <var> → A | B | C
    <expression> → <var> + <var>
                | <var> – <var>
                | <var>
    ```

    Notação EBNF:
    ```
    <program> → begin <stmt_list> end
    <stmt_list> → <stmt> {; <stmt_list>}
    <stmt> → <var> = <expression>
    <var> → A | B | C
    <expression> → <var> {(+ | -) <var>}
    ```

- Converta a BNF do Exemplo 3.3 para EBNF.

    Notação BNF:
    ```
    <assign> → <id> = <expr>
    <id> → A|B|C
    <expr> → <expr> + <expr>
            | <expr> * <expr>
            | (<expr>)
            | <id>
    ```

    Notação EBNF:
    ```
    <assign> → <id> = <expr>
    <id> → A | B | C
    <expr> → <expr> {(+ | *)}
           | (<expr>)
           | <id>
    ```

### Questão 02

Enunciado:

- Escreva uma gramática de atributo cuja base da BNF é aquela do Exemplo 3.2 e cujas regras de tipo são as mesmas do exemplo de sentença de atribuição da Seção 3.4.5.

    Notação BNF:
    ```
    <assign> → <id> = <expr>
    <id> → A|B|C
    <expr> → <id> + <expr>
           | <id> * <expr>
           | (<expr>)
           | <id>
    ```

    Gramática de Atributos:
    ```
    1. Regra Sintática: <assign> → <id> = <expr>
       Regra Semântica: <expr>.expected_type ← <id>.actual_type
    2. Regra Sintática: <expr> → <id> + <expr>
                        <expr> → <id> * <expr>
       Regra Semântica: <expr>.actual_type ← 
            if (<id>.actual_type = int) and (<expr>.actual_type = int)
                then int
            else real
            end if
        Predicado: <expr>.actual_type == <expr>.expected_type
    3. Regra Sintática: <expr> → (<expr>)
                        
       Regra Semântica: <expr>.actual_type ← (<expr>).actual_type
       Predicado: <expr>.actual_type == <expr>.expected_type
    4. Regra Sintática: <expr> → <id>
       Regra Semântica: <expr>.actual_type ← <id>.actual_type
    <expr>.actual_type == <expr>.expected_type
    5. Regra Sintática: <id> → A | B | C
       Regra Semântica: <id>.actual_type ← lookup(<id>.string)
    ```