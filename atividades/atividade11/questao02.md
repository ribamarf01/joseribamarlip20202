# Atividade 11 de Linguagens de Programação 2020.2

## Aluno: José Ribamar Silva Soares Filho
## Matrícula: 472687

### Mostre uma análise sintática completa, incluindo o conteúdo da pilha de análise sintática, a cadeia de entrada e ações para a cadeia id * (id + id), usando a gramática e a tabela de análise sintática da seção 4.5.3 do livro adotado na disciplina. Coloque o resultado em questao02.md ou questao02.pdf.

Gramática do Livro:
```
1. E → E + T
2. E → T
3. T → T * F
4. T → F
5. F → ( E )
6. F → id
```

id * (id + id)

Pilha | Entrada | Ação
------|---------|-----
0 | id * (id + id)$ | Shift 5
0id5 | * (id + id)$ | Reduce 6, GOTO(0, F)
0F3 | * (id + id)$ | Reduce 4, GOTO(0, T)
0T2 | * (id + id)$ | Shift 7
0T2*7 | (id + id)$ | Shift 4
0T2*7(4 | id + id)$ | Shift 5
0T2*7(4id5 | + id)$ | Reduce 6, GOTO(4, F)
0T2*7(4F3 | + id)$ | Reduce 4, GOTO(4, T)
0T2*7(4T2 | + id)$ | Reduce 2, GOTO(4, E)
0T2*7(4E8 | + id)$ | Shift 6
0T2*7(4E8+6 | id)$ | Shift 5
0T2*7(4E8+6id5 | )$ | Reduce 6, GOTO(6, F)
0T2*7(4E8+6F3 | )$ | Reduce 4, GOTO(6, T)
0T2*7(4E8+6T9 | )$ | Reduce 1, GOTO (4, E)
0T2*7(4E8 | )$ | Shift 11
0T2*7(4E8)11 | $ | Reduce 5, GOTO(7, F)
0T2*7F10 | $ | Reduce 3, GOTO(0, T)
0T2 | $ | Reduce 2, GOTO (0, E)
0E1 | $ | Aceitar