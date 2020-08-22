import math
# from itertools import permutations 
def allPermutations(string):        
    listi = permutations(string) 
    for i in list(listi): 
        print(''.join(i)) 
from operator import add
# ord(i)-ord('0')
t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int, input().split()))
    b=[]
    for i in range(n):
        b.append(a[i])
    b.sort()
    if(b!=a):
        mini=min(a)
        for i in range(n):
            if(math.gcd(a[i],mini)!=mini and a[i]!=b[i]):
                print("NO")
                break
            if(i==n-1):
                print("YES")
    else:
        print("YES")