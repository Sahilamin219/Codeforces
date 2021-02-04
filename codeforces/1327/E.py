import sys
input=sys.stdin.readline
inf = 1e10
mod = int(1e9 + 7)
t=1;
# t=int(input())
for _ in range(t):
    n=int(input())
    modulo = 998244353
    p=[1]*(n+1)
    for i in range(1, n):
        p[i] = (p[i-1]*10)%modulo
    for i in range(1, n):
        # total no of ways for 1length block for (n-i) size
        res  = 2*10*9*p[n-i-1]
        res  += 10*9*9*p[n-i-2]*(n-1-i)
        print(res%modulo, end=" ")
    print(10)