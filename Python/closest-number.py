# Ahmad Aziz
# https://www.hackerrank.com/challenges/closest-number/problem

"""
    Solution:
    
    1) Find the value of a^b
    2) Divide that value by X (will result in a float most of the times)
    3) Round/Floor that divided number to get an integer
    4) Multiply that integer by X to get the closest multiple of X to a^b 
""" 

def closestNumber(a, b, x):
    """
    Calculate the closest number to a^b which is a multiple of x.
    :param a: base (number)
    :param a: exponent (number)
    :param x: closest multiple of (number)
    :return: closest multiple (number)
    """ 
    ab = a ** b
    closestMultiple = round(ab / x) * x
    return closestMultiple

# User inputs
a = int(input("Enter a: "))
b = int(input("Enter b: "))
x = int(input("Enter x: "))

result = closestNumber(a, b, x)
print(f"The closest number is: {result}")