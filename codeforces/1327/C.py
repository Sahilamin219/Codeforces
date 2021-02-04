import math
import sys
input=sys.stdin.readline

inf = 1e10
mod = int(1e9 + 7)
t=1;
# t=int(input())
for _ in range(t):
    n, m,k = map(int, input().split())
    # when asked first to print total steps : may be formula
    print ( n-1 + m-1 + n*(m-1) + n-1 )
    print( "U"*(n-1) + "L"*(m-1) , end="")
    for i in range(n):
        if(i):print("D", end="")
        if(i%2):print("L"*(m-1), end="")
        else:print("R"*(m-1), end="")
        