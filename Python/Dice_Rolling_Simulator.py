import random

number_of_dice = input("Hello, how many dice will you throw?")

while int(number_of_dice) != 0:
    
    results = []

    for dice in range(int(number_of_dice)):
        results.append(random.randrange(1,7))
    print(results)

    number_of_dice = input("Hello, how many dice will you throw?")