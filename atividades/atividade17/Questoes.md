# Atividade 17 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Questão 01 - 0,9

1. a * b - 1 + c

    (((a * b)<sup>1</sup> - 1)<sup>2</sup> + c)<sup>3</sup>

2. a * (b - 1) / c mod d

    (((a * (b - 1)<sup>1</sup>)<sup>2</sup> / c)<sup>3</sup> mod d)<sup>4</sup>

3. (a - b) / c & (d * e / a - 3)

    (((a - b)<sup>1</sup> / c)<sup>5</sup> & (((d * e)<sup>2</sup> / a)<sup>3</sup> - 3)<sup>4</sup>)<sup>6</sup>

4. -a or c = d and e

    ((-a)<sup>1</sup> or ((c = d)<sup>2</sup> and e)<sup>3</sup>)<sup>4</sup>

5. a > b xor c or d <= 17

    (((a > b)<sup>1</sup> xor c)<sup>2</sup> or (d <= 17)<sup>3</sup>)<sup>4</sup>
    
**(((a>b)<sup>1</sup>xor c)<sup>3</sup> or (d<=17)<sup>2</sup>)<sup>4</sup>**

6. -a + b

    (-(a + b)<sup>1</sup>)<sup>2</sup>

### Questão 02 - 0,5

i, j = 10, 10

Esquerda: 
   sum1 = (i/2) + fun(&i)
   sum1 = (10/2) + fun((10+4)*3-1)
   sum1 = 5 + 41 = 46

   sum2 = fun(&j) + (j / 10) // A função é lida primeiro
   sum2 = 41 + (14/2) // O valor de j é alterado no endereço de memória, antes de sua leitura em (j/2)
   sum2 = 48
   
Direita:
   sum1 = (i/2) + fun(&i) // A função é lida primeiro.
   sum1 = ((10+4)/2) + 41 // O valor de i é alterado no endereço de memória, antes da leitura de (i/2)
   sum1 = 7 + 41 = 48

   sum2 = fun(&j) + (j / 10)
   sum2 = 41 + (10/2)
   sum2 = 41 + 5 = 46

### Questão 03 - 0,5

Esquerda:
    x = 3
    x = 3 + fun(&x) // A função altera o valor de x, porém sempre retorna 4
    x = 3 + 4 // O valor de x continua igual, pois foi alterado depois
    x = 7

Direita:
    x = x + fun(&x)
    x = (3 + 5) + 4 // O valor de x na memória é acrescido em 4 na execução da função
    x = 8 + 4
    x = 12
