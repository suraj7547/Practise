#python banking program

def show_balance(balance):
    print("------------------------")
    print(f"Your current balance is: ${balance:.2f}")
    print("------------------------")

def deposit(balance):
    print("------------------------")
    amount=float(input("Enter the amount you want to deposit: "))
    print("------------------------")
    if amount <0:
        print("------------------------")
        print("The amount must be greater than zero")
        print("------------------------")
        return 0
    else:
        return amount

def withdraw(balance):
    print("------------------------")
    amount=float(input("Enter the amount you want to withdraw: "))
    print("------------------------")
    if amount <0:
        print("------------------------")
        print("The amount must be greater than zero")
        print("------------------------")
        return 0
    elif amount >balance:
        print("------------------------")
        print("Insufficient funds")
        print("------------------------")
        return 0
    else:
        return amount

def main():
    balance=0
    is_running=True
    while is_running:
        print("------------------------")
        print("Banking system")
        print("------------------------")
        print("1.show balance")
        print("2.deposite money")
        print("3.withdraw money")
        print("4.exit")

        choice=int(input("Enter your choice(1-4): "))

        if choice==1:
            show_balance(balance)
        elif choice==2:
            balance+=deposit(balance)
        elif choice==3:
            balance-=withdraw(balance)
        elif choice==4:
            is_running=False
        else:
            print("------------------------")
            print("Invalid choice")
            print("------------------------")
    print("Have a nice day!")   

if __name__=="__main__":
    main()