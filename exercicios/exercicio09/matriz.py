# Correção: OK
def matrizEmLinha(m, ordem):

    for i in range(ordem * ordem):
        m.append(i)

def acessoMatrizEmLinha(m, i, j, ordem):

    return m[i * ordem + j] 

def matrizEmListas(m, ordem):

    for i in range(ordem):
        n = []
        for j in range(ordem):
            n.append(i * ordem + j)
        m.append(n)

def acessoMatrizEmListas(m, i, j, ordem):

    return m[i][j]
    
m1 = []
matrizEmLinha(m1, 3)
print(m1)
print(acessoMatrizEmLinha(m1, 1, 1, 3))

m2 = []
matrizEmListas(m2, 3)
print(m2)
print(acessoMatrizEmListas(m2, 1, 1, 3))
