def fatorial(n):
    if n<=1:
        return 1
    else:
        return n*fatorial(n-1)



def fibonnaci(n):
    if n == 0 or n ==1:
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
print(toBinary(10))
