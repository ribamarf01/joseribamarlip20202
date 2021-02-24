def matrizEmLinha(m, ordem):
    
    for i in range(ordem * ordem):
        m.append(i)

def acessoMatrizEmLinha(m, i, j, ordem):
    return m[i * ordem + j] 



def multiplicarMatrizesEmLinha(m1, m2, ordem):
    mAux = []
    for linha in range(ordem):
        for coluna in range(ordem):
            temp = 0
            for i in range(ordem):
                temp = temp + acessoMatrizEmLinha(m1, linha, i, ordem) * acessoMatrizEmLinha(m2, i, coluna, ordem)
            mAux.append(temp)
    
    print(mAux)

m1 = []
m2 = []

matrizEmLinha(m1, 4)
matrizEmLinha(m2, 4)

multiplicarMatrizesEmLinha(m1, m2, 4)