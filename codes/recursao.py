def fatorial(n):
    if n<=1:
        return 1
    else:
        return n*fatorial(n-1)



def fibonnaci(n):
    if n >=0:
        return n
    else:
        return fibonnaci(n-1) + fibonnaci(n-2)



def imprimirN(n):
    if n > 0:
        print(n)
        imprimirN(n-1)
        print(n)
# essa função empilhou e desempilhou os n's
        

def potencia(base, expoente):
    if(expoente == 0):
        return 1
    elif (expoente == 1):
        return base
    else:
        return potencia(base, expoente-1)*base

def toBinary(decimal):
    if decimal == 0:
        return 
    else:
        toBinary(decimal//2)
        print(decimal%2, end='')
#print(toBinary(10))

def soma(vetor):
    size = len(vetor)
    if (size == 0):
        return 0
    else:
        return vetor[size-1]+soma(vetor[:size-1])
    
lista = [1, 2, 3, 4, 4,4,4,4,4]  
#print(soma(lista))
def numerosNaturais(n):
    print(n)
    if n>0:
        numerosNaturais(n-1)

#numerosNaturais(9)


def quantElementosList(lista, num):
    soma = 0
    size = len(lista)
    if(size == 1):
        if(num == lista[size-1]):
            return 1
        else:
            return 0
    else:
        if(num == lista[size-1]):
            soma+=1
        soma += quantElementosList(lista[:-1], num)
        return soma
    
def somaElementosAnteriores(n):
    if (n<=0):
        return 0
    else:
        return n+somaElementosAnteriores(n-1)
    
print(somaElementosAnteriores(10))