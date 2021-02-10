# Exercício 08 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01
```
procedure Main is
      X : Integer; -- Primeira Declaração de X
      procedure Sub3; -- Essa é uma declaração de Sub3
                      -- Ela permite que Sub3 a chame
      procedure Sub1 is
         X : Integer; -- Segunda Declaração de X
         procedure Sub2 is
            begin -- de Sub2
            ...
            end; -- de Sub2
         begin -- de Sub1
         ...
         end; -- de Sub1
      procedure Sub3 is
         begin -- de Sub3
         ...
         end; -- de Sub3
   begin -- de Main
   ...
   end; -- de Main
```

Assuma que a execução desse programa é na seguinte ordem de invocações:
```
Main chama Sub1
Sub1 chama Sub2
Sub2 chama Sub3
```

+ a) Assumindo escopo estático, qual a declaração de X (primeira ou segunda) é correta dentro de
1. Sub1

    R.: Segunda declaração, já que o X declarado dentro de Sub1 oculta o ancestral.

2. Sub2

    R.: Segunda declaração, poís o ancestral de Sub2 é Sub1

3. Sub3

    R.: Primeira declaração, já que Sub3 é declarado dentro do escopo Main, logo seu ancestral é a Main.

+ b) Repita a parte a), mas assuma escopo dinâmico.

1. Sub1

    R.: Segunda declaração, pois a uma declaração de X dentro de Sub1

2. Sub2

    R.: Segunda declaração, Sub2 é chamado por Sub1

3. Sub3

    R.: Segunda declaração, poís Sub3 é chamado por Sub2, que possui ancestral dinâmico Sub1

### Questão 02

Assuma que o seguinte programa Ada foi compilado e executado usando regras de escopo estático. Que valor de X é impresso no procedimento Sub1? Sob regras de escopo dinâmico, qual o valor de X impresso no procedimento Sub1?
```
procedure Main is
   X : Integer;
   procedure Sub1 is
      begin -- de Sub1
      Put(X); -- Considere Put como um Print
      end; -- de Sub1
   procedure Sub2 is
      X : Integer;
      begin -- de Sub2
      X := 10;
      Sub1
      end; -- de Sub2
   begin -- de Main
   X := 5;
   Sub2
   end; -- de Main
```

Escopo Estático: Como Sub1 foi declarado na Main, seu ancestral logo se torna a Main, por isso o X impresso será o X definido em Main ou 5.

Escopo Dinâmico: Main chama Sub2, que declara um X e põe seu valor como 10, e então chama Sub1, como um novo valor para X foi declarado em Sub2, ele se torna pai dinâmico de Sub1, que por sua vez imprime X como 10.

### Questão 03

Considere o programa em C:
```
void fun(void) {
   int a, b, c; /* definição 1 */
   ...
   while (...) {
      int b, c, d; /* definição 2 */
      ... <-------------- 1
      while (...) {
         int c, d, e; /* definição 3 */
         ... <------------- 2
      }
      ... <-------------- 3
   }
   ... <---------------- 4
} 
```
Para cada um dos quatro pontos marcados nessa função, liste cada variável visível, com o número da sentença de definição que a define.

Ponto | Variável Visível
-|-
1 | B, C e D de definição 2, A de definição 1 (B e C de definição 1 estão ocultos)
2 | C, D e E de definição 3, B de definição 2 e A de definição 1 (C e D de definição 2 estão ocultos, B e C de definição 1 estão ocultos)
3 | B, C e D de definição 2 e A de definição 1 (B e C de definição 1 estão ocultos)
4 | A, B e C de definição 1

### Questão 04
Considere o seguinte esqueleto de programa em C:
```
void fun1(void); /* protótipo */
void fun2(void); /* protótipo */ 
void fun3(void); /* protótipo */

void main() {
int a, b, c;
   ...
}
void fun1(void) {
   int b, c, d;
   ...
}
void fun2(void) {
   int c, d, e;
   ...
}
void fun3(void) {
   int d, e, f;
   ...
} 
```
Dada as seguintes sequências de chamadas e assumindo que o escopo dinâmico é usado, que variáveis são visíveis durante a execução da última função chamada? Inclua com cada variável visível o nome da função na qual ela foi definida.

+ a) main chama fun1; fun1 chama fun2; fun2 chama fun3.

    D, E e F de Fun3, C de Fun2, B de Fun1, A de Main

+ b) main chama fun1; fun1 chama fun3.

    D, E e F de Fun3, B e C de Fun1, A de Main

+ c) main chama fun2; fun2 chama fun3; fun3 chama fun1.

    B, C e D de fun1, E e F de Fun3, A de Main 

+ d) main chama fun3; fun3 chama fun1.

    B, C e D de fun1, E e F de fun3, A de Main

+ e) main chama fun1; fun1 chama fun3; fun3 chama fun2.

    C, D e E de fun2, F de Fun3, B de fun1, A de Main

+ f) main chama fun3; fun3 chama fun2; fun2 chama fun1.

    B, C e D de fun1, E de fun2, F de fun3, A de Main
