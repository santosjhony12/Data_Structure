
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