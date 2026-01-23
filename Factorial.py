n = int(input("Enter a number: "))
f=1
if n==0 or n==1:
    print("Factorial value is:",f)
else:
    for i in range(1,n+1):
        f=f*i
    else:
        print("Factorial value:",f)
