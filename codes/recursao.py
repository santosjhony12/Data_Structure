def fatorial(n):
    if n<=1:
        return 1
    else:
        return n*fatorial(n-1)

print(fatorial(5))

def fibonnaci(n):
    if n == 0 or n ==1:
        return n
    else:
        return fibonnaci(n-1) + fibonnaci(n-2)

print(fibonnaci(15))