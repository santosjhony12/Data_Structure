def function_primos(vetor):
    quantElementosPrimos = 0
    primo = True
    
    for i in vetor:
        if i == 1 or i == 2:
            quantElementosPrimos += 1
        else:
            for antecessor in range(2, i):
                if i % antecessor == 0:
                    primo = False
            if primo == True:
                quantElementosPrimos +=1

            primo = True        
    return quantElementosPrimos

def taxa_juros(capital, taxa, periodo):
    return capital*(1+ taxa/100)**periodo

def missingNumber(nums):
    missNumber = 0
    for number in range(0, len(nums)+1):
        possui = False
        for item in nums:
            if item == number:
                possui = True

        if possui == False:
            return number
print(missingNumber([0,3,1]))

def test_function_primos():
    assert function_primos([2, 3, 5, 7, 11]) == 5
    assert function_primos([4, 6, 8, 9, 10]) == 0
    assert function_primos([]) == 0
    assert function_primos([13]) == 1

def test_taxa_juros():
    assert taxa_juros(0, 10, 2) == 0
    assert taxa_juros(1000, 0, 5) == 1000
    assert taxa_juros(500, 3, 0) == 500
    assert taxa_juros(1000, 5, 2) == 1102.5

test_function_primos()
test_taxa_juros()
