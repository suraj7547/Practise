import random
value=['rock','paper','scissors']
playing=True
while playing:
    computer=random.choice(value)
    player=""

    while player not in value:
        player=input("rock/paper/scissors: ").lower()
    print(f"Player: {player}")
    print(f"Computer: {computer}")

    if player==computer:
        print("Tie")
    elif player=="rock" and computer == "scissors":
        print("You WON!")
    elif player=="paper" and computer=="rock":
        print("You WON!")
    elif player=="scissors" and computer == "paper":
        print("You WON!")
    else : 
        print("You LOST!")

    play_again=input("play again?(y/n):").lower()
    if play_again!="y":
        playing=False
print("Thank you for playing!")