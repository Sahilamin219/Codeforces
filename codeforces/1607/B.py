from math import ceil

def jump(pos, c):
    if (pos%2): return pos + c
    else: return pos -c


n = int(input())

for _ in range(n):
    p, j = map(int, input().split())
    
    r = j%4
    if(j==0):
        print(p)
    elif (p%2 == 0):
        if r == 0:
            print(p)
        elif r == 1:
            print(p-j)
        elif r == 2:
            print(1+p)
        else:
            print(p +1 + j)
    else:
        if r == 0:
            print(p)
        elif r == 1:
            print( j+p)
        elif r == 2:
            print(p-1)
        else:
            print(p - j-1)
    