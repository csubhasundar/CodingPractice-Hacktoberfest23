name = input("Type your name: ")

print("Welcome", name, "to this adventure!")

answer = input("You are on a dirt road, it has come to an end and you can either go left or go right. Which direction do you want to go? ").lower()

if answer == "left":
  answer = input("You arrive at a river, you can walk around it, or swim across. Type 'walk' to walk around, or 'swim' to swim across the river: ").lower()

  if answer == "swim":
    print("The river is home to many alligators, and you were their meal. You lose.")

  elif answer == "walk":
    print("You walked for many miles, and ran out of food and water. You collapsed under the heat of the sun. You lose.")

  else:
    print("Not a valid option. You lose.")

elif answer == "right":
  answer = input("You arrive at a wooden bridge, it looks wobbly; do you want to cross the bridge, or go back? 'cross' or 'back' ").lower()

  if answer == "back":
    print("The return back to the road. The left path is blocked. You lose.")

  elif answer == "cross":
    answer = input("You cross the rickety wooden bridge, and meet a stranger. Do you talk with them? 'yes' or 'no' ").lower()

    if answer == "yes":
      print("You talk with the stranger, and offer them food & water. In return they give you gold and a safe route home.")

    elif answer == "no":
      print("You ignored the stranger, and walk in an endless fractoral path. You lose.")

    else:
      print("Not a valid option, you lose.")

  else:
    print("Not a valid option. You lose.")

else:
  print("Not a valid route. You lose :-(")

print("Thank you for trying this simple adventure ", name)