# Atividade 09 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687
### Correção: 0,8

### Compute a pré-condição mais fraca para cada uma das seguintes construções de linguagem e suas pós condições:

1. b = (c + 10) / 3 { b > 6}

Solução:
```
(c + 10) / 3 > 6
c + 10 > 6 * 3
c + 10 > 18
c > 18 - 10
{c > 8}
```

2. x = 2 * y + x - 1 { x > 11 }

Solução:
```
2y + x - 1 > 11
2y + x > 11 + 1
2y + x > 12
2y > 12 - x
{y > (12 - x) / 2}
```

3. a = 3 * (2 * b + a); b = 2 * a - 1; { b > 5 }

Solução:
```
Pós condição 1 // Pre Condição 2:
2a - 1 > 5
2a > 5 + 1
2a > 6
a > 6 / 3
{a > 3}

Pré condição 1:
3 * (2 * b + a) > 3
3 * (2b + a) > 3
6b + 3a > 3
3a > 3 - 6b
a > (3 - 6b) / 3
{a > 1 - 2b}

Logo: {a > 1 - 2b} a = 3 * (2 * b + a); {a > 3} b = 2 * a - 1; { b > 5 }
```

4. 
if ( x < y ) 
    x = x + 1; 
else 
    x = 3 * x; 
{ x < 0 }

Solução:
```
if: 
x + 1 < 0
{x < -1}

else:
3 * x < 0
x < 0 / 3
{x < 0}

Logo: (x < 0) > (x < -1), a pré condição geral será {x < 0}
```
## Correção: a condição mais geral é  x < -1, pois é a intersecção dos dois intervalos.

5. 
if ( x > y ) 
    y = 2 * x + 1; 
else 
    y = 3 * x - 1; 
{ y > 3 }

Solução: 
```
if:
2x + 1 > 3
2x > 3 - 1
x > 2 / 2
{x > 1}

else:
3x - 1 > 3
3x > 3 + 1
3x > 4
x > 4 / 3

Logo (x > 1) > (x > 4/3), a pre condição geral será {x > 1}
```
