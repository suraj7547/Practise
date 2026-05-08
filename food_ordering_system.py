foods=[]
items={'burger':10,
       'hotdog':20,
       'pizza':25,
       'bread':5,
       'coffee':10
       }
total=0
while True:
    food=input("Please choose Your order\n"
               '1.burger\n'
               '2.hotdog\n'
               '3.pizza\n'
               '4.bread\n'
               '5.coffee\n'
               "Type exit to quit\n"
               )
    if(food=='exit'):
        break
    elif food in items:
        foods.append(food)
        total+=items[food]
    else:
        print("error: Item not available\n")


print('===Your Cart===')
for food in foods:
    print(food,end=' ',)

print('\n===Total Price===')
print(total)
