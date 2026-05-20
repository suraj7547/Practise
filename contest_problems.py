#first question - Tour plan


x, y, z = map(int, input().split())

if z <= 50:
    print(x)
else:
    print(x + (z - 50) * y)

#second question - easy speaking

t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()
    
    consonant_count = 0
    is_hard = False
    
    for char in s:
        if char in 'aeiou':
            consonant_count = 0
        else:
            consonant_count += 1
            if consonant_count >= 4:
                is_hard = True
                break
                
    if is_hard:
        print("Yes")
    else:
        print("No")
        