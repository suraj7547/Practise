menu={
    "pizza":30,
    "nachos":45,
    "popcorn":60,
    "fries":25,
    "chips":10,
    "pretzel":35,
    "soda":30,
    "lemonade":42
}
cart=[]
Total=0
for key,value in menu.items():
    print(f"{key:9}: ${value}")
while True:
    food=input("Enter your item(press q to exit): ").lower()
    if(food=='q'):
        break
    elif food not in menu:
        print("Item not available")
    else:
        cart.append(food)

print('----- Your Cart ----')
for items in cart:
    print(items,end=" ")
print()

print("---- Your Total ----")
for food in cart:
    Total+=menu.get(food)
print(f"${Total}")