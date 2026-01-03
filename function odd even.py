num = int(input("Enter the number: "))

def checker(num):
    if num==0: print("zero is neither even nor odd")
    if num%2==0:
        print("Even")
    else:
        print("odd")

checker(num)
