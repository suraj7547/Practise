#make a game with random module where  user enters the input and tell the data is lower than the guess or higher. also count the number of guesses he took to get the correct answer.
import random
low=1
high=100
number=random.randint(low,high)
guesses=0
while True:
    guess=input("Enter your guess: ")
    guesses+=1
    if guess.isalpha()==True:
        print("invalid")
    elif guess.isdigit()==True:
        guess=int(guess)
        if guess>number:
            print("Too high")
        elif guess<number:
            print('Too low')
        else: 
            print("Your guess is correct!")
            break            
print("---- Number of guess ----")
print(guesses)  