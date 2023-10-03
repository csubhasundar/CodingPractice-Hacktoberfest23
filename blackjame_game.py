import random
numbers = [11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10]
def backjack():
    sum_player = 0
    sum_computer = 0
    player = [] 
    computer = []
    for i in range(2):
        players_card = random.choice(numbers)
        player.append(players_card)
        sum_player += players_card
    computers_card = random.choice(numbers)
    computer.append(computers_card)
    sum_computer += computers_card
    print(f"Your cards: {player} and current score is {sum_player}")
    print(f"Computer's first card is {computer}")
    while True:
        card = input("Type 'y' to get another card, type 'n' to pass: ").lower()
        if card == 'y':
            new_card = random.choice(numbers)
            player.append(new_card)
            sum_player += new_card
            print(f"Your current hand: {player}, cuurent score: {sum_player}")

        else:
            break
        
    print(f"Your final hand: {player}, final score: {sum_player}")
    computers_card = random.choice(numbers)
    computer.append(computers_card)
    sum_computer += computers_card
    print(f"Computer's hand: {computer}, final score: {sum_computer}")
    if sum_player <= 21:
        if sum_player > sum_computer:
            print("You won!")
        elif sum_computer == sum_player:
            print("It's a draw!")
        else:
            print("Computer won!")
    else:
        print("You lost!")

while True:
    play = input("Do you want to play the game 'y' or not 'n': ").lower()
    if play == 'y':
        backjack()
    else:
        print("Thanks for playing!")
        break
