# Atividade 14 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

Matrizes multidimensionais podem ser armazenadas em ordem principal de linha, como em C++, ou em ordem principal de coluna, como no Fortran. Desenvolva a função de acesso para ambas as disposições para matrizes tridimensionais. Esta função deve receber três argumentos (exemplo: i, j e k) e partir de um endereço de memória inicial conhecido deve fazer os deslocamentos necessários para obter o endereço do valor indicado pela posição. Para entender melhor como descrever a função, leia a seção 6.5.9, páginas 295 à 299 do livro texto.

```
I: Endereço de memória inicial.
sizeof(type): Tamanho que o type(genérico) ira ocupar na memória.
tam: Tamanho.
v(i, j, k): Função que retorna o endereco de mémoria da matriz.

Alem das colunas e linhas, temos uma 3º dimensão, onde podemos apelidar de célula onde serão armazenados os valores.
```

Ordem principal em linha: 
```
v(i, j, k) = I + (i * tamLinha * tamColuna * sizeof(type)) + (j * tamColuna * sizeof(type)) + (k * sizeof(type))
```

Ordem principal em coluna: 
```
v(i, j, k) = I + (i * sizeof(type)) + (j * tamLinha * sizeof(type)) + (k * tamColuna * tamLinha * sizeof(type))
```