#Exercise 2 shopping cart program

item = input("Enter name of your item: ")
price = float(input("Enter the price: "))
quantity = int(input("How many you would like: "))
total = price * quantity
print(f"Your Total Bill: ${total}")
print("Thanks for shopping!\nHave a nic day!")
