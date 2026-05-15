#all ordered item
#total number of items
#customer deatils

def take_order(*args,**kwargs):
    total=0
    print("----- ORDER RECEIPT -----")
    print("Items: ")
    for arg in args:
        print(f"-{arg}")
        total+=1
    print()
    print(f"Total items: {total}")
    print()
    print("Customer Details: ")
    print(f"Name: {kwargs.get('name')}")
    print(f"Table: {kwargs.get('table')}")
    print(f"Payment Method: {kwargs.get('payment')}")
    

customer=take_order(
    "Burger",
    "Pizza",
    "Fries",
    "Samosa",
    name="suraj",
    table="3",
    payment="cash"
    )

