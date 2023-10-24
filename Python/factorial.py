print("Enter a number to find the factorial")
n = int(input())
fact = 1

for i in range(1,n+1):
    fact *= i

print(f"The factorial of number {n} is {fact}")
