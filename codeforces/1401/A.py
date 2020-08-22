def allPermutations(string):        
    listi = permutations(string) 
    for i in list(listi): 
        print(''.join(i)) 
from operator import add
# ord(i)-ord('0')
t=int(input())
for _ in range(t):
    a,k=map(int, input().split())
    if(k>a):
        print(k-a)
    else:
        if(k%2==a%2):
            print(0)
        else:
            print(1)