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

#third question - beginnings and endings

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    first_occ = {}
    last_occ = {}
    
    for i in range(n):
        val = a[i]
        if val not in first_occ:
            first_occ[val] = i
        last_occ[val] = i
        
    min_swaps = float('inf')
    
    for val in first_occ:
        if first_occ[val] != last_occ[val]:
            swaps = first_occ[val] + (n - 1 - last_occ[val])
            if swaps < min_swaps:
                min_swaps = swaps
                
    if min_swaps == float('inf'):
        print("-1")
    else:
        print(min_swaps)

#forth question - magic mirror

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    # The sum of the first and last element should match all other pairs
    target_sum = a[0] + a[-1]
    is_possible = True
    
    # Check pairs from the outside in
    for i in range(n // 2):
        if a[i] + a[n - 1 - i] != target_sum:
            is_possible = False
            break
            
    if is_possible:
        print("Yes")
    else:
        print("No")

#fifth question - planting roses

import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    T = int(input_data[0])
    idx = 1
    out = []
    
    for _ in range(T):
        N = int(input_data[idx])
        M = int(input_data[idx+1])
        K = int(input_data[idx+2])
        idx += 3
        
        count_K = 0
        R = []
        
        for _ in range(N):
            a = int(input_data[idx])
            idx += 1
            count_K += a // K
            rem = a % K
            if rem > 0:
                R.append(rem)
                
        budget = M + 1
        roses = 0
        
        take_K = min(count_K, budget // (K + 1))
        budget -= take_K * (K + 1)
        roses += take_K * K
        
        if take_K < count_K:
            roses += max(0, budget - 1)
            out.append(str(roses))
            continue
            
        R.sort(reverse=True)
        
        for r in R:
            if budget >= r + 1:
                budget -= r + 1
                roses += r
            else:
                roses += max(0, budget - 1)
                budget = 0
                break
                
        out.append(str(roses))
        
    print('\n'.join(out))

solve()

#sixth question - Gravity Golf