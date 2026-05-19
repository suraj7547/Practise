#💰 🗝️ 🎲 🍎 ⭐
import random


def spin_row():
    row=["💰","🗝️","🎲","🍎","⭐"]
    return [random.choice(row) for _ in range(3)]

def print_row(row):
    print(" | ".join(row))

def get_payout(row,bet):
    if row[0]==row[1]==row[2]:
        print("You won1")
        if row[0]=="💰":
            return bet  *  3
        elif row[0]=="🗝️":
            return bet * 5
        elif row[0]=="🎲":
            return bet * 8
        elif row[0]=="🍎":
            return bet  * 10
        elif row[0]=="⭐":
            return bet * 15
    else:
        return 0
        

def main():
    balance=100
    playing=True
    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
    print("Welcome to python slot machine")
    print("Symbols:💰 | 🗝️  | 🎲 | 🍎 | ⭐")
    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-")
    while balance>0: 
        print(f"Your current balance:{balance}")

        bet=input("Enter your bet: $")
        if not bet.isdigit():
            print("Invalid bet")
            continue
        bet=int(bet)
        if bet>balance:
            print("insuficient balance")
            continue
        # if balance<=1:
        #     playing=False
        balance-=bet

        row =spin_row()
        print_row(row)
        payout=get_payout(row,bet)
        balance+=payout

if __name__=="__main__":
    main()