# ORDENAÇÃO POR INSERÇÃO
# ADICIONO UM ELEMENTO
# MELHOR JEITO DE FAZER UMA COMPARAÇÃO É DE TRÁS PARA FRENTE
# A PRIMEIRA POSIÇÃO 0 SEMPRE ESTÁ ORDENADO
# O PIOR CENARIO É QUANDO ESTÁ DESCRECENTE - Complexidade n²


vetor = [50, 54, 80 ,62 ,74, 99, 61 , 52, 64 ,89,58]

def ordenaPorInsercao(vetor):
    size = len(vetor)
    for i in range(0, size-1):
        if(vetor[i] > vetor[i+1]):
            aux = vetor[i]
            for i in range(0, )