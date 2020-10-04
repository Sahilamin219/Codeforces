import math
for _ in range(int(input())):
    n=int(input())
    i=n**0.5
    x=(n/i)+(i-1)
    print(math.ceil(x-1))