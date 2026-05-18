list1 = [1,2,3,2,1]
copy = list.copy(list1)
list.reverse(copy)
if list1==copy:
    print("palindrome")
else:
    print("Not palindrome")
