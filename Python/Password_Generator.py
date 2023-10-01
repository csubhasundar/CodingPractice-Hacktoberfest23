import random

letters = ["a","b","c","d","e","f","g","h","i","j","k"
,"l","m","n","o","p","q","r","s","t","u","v","w","x","y",
"z",'A','B','C','D','E','F','G','H','I','J','K','L','M',
'N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
numbers = ["0",'1','2','3','4','5','6','7','8','9']
symbols = ['!','@','#',"$","%","^","&",'*',"(",")","+","_","-"]

print("Welcome to the PyPassword Generator!")
nr_letters= int(input("How many letters would you like in your password? \n"))
nr_numbers= int(input("How many numbers would you like in your password? \n"))
nr_symbols= int(input("How many symbols would you like in your password? \n"))

string = num = symbl =""
for i in range (0, nr_letters):
    string += letters[random.randint(0, len(letters)-1)]

for j in range (0, nr_numbers):
    num += numbers[random.randint(0, len(numbers)-1)]

for k in range (0, nr_symbols):
    symbl += symbols[random.randint(0, len(symbols)-1)]

easy =  string + num + symbl
print(f"The easy password is {easy}")

password = []
for l in range (0, nr_letters):
    password.append(random.choice(letters))

for m in range (0, nr_numbers):
    password += random.choice(numbers)

for n in range (0, nr_symbols):
    password += random.choice(symbols)

random.shuffle(password)

hard =""
for p in password:
    hard += p
print(f"The hard password is {hard}")
