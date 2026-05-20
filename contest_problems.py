#first question

x, y, z = map(int, input().split())

if z <= 50:
    print(x)
else:
    print(x + (z - 50) * y)