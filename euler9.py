def isEqualPythagoreanTriplet(a, b, c):
    return a * a + b * b == c * c

def findPythagoreanTripletWithSum(sum_value):
    for a in range(3, sum_value - 2):
        for b in range(a + 1, sum_value - a):
            c = sum_value - a - b
            if c > 0 and isEqualPythagoreanTriplet(a, b, c):
                return (a, b, c)
    return None

def calculateProductOfTriplet(triplet):
    if triplet:
        a, b, c = triplet
        return a * b * c
    return None

sum_value = 1000
triplet = findPythagoreanTripletWithSum(sum_value)
productOfTriplet = calculateProductOfTriplet(triplet)
print(productOfTriplet)