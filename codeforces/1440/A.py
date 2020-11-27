from math import ceil, floor, gcd, fabs, factorial, fmod, sqrt, inf
from fractions import Fraction
from decimal import Decimal
import math
mod = pow(10, 9) + 7
def sp(): return map(int, input().split())
def lit(): return list(sp())
def fun(x):
    return sum(int(i) for i in str(x))
def find(n):
    if(n==3):return 3
    while(1):
        flag=0
        for i in range(2,int(sqrt(n))+1):
            if(n%i==0):
                n+=1
                break;
            if(i==int(sqrt(n))):flag=1;break;
        if(flag):break;
    return n;
    # print(i+1, i+((n+1)//2)+1)
t=int(input())
# t=1 
# liaison lis.sort(key=lambda x: (x[0], x[1]))
for _ in range(t):
    n,c0,c1,h = map(int, input().split())
    s=input()
    ans=0
    if(c1>c0 and max(c1,c0) > h + min(c1,c0) ):
        for i in s:
            if(i=='1'):ans+=(h+c0)
            else : ans+=c0
    elif(c1<=c0 and max(c1,c0) > h + min(c1,c0) ):
        for i in s:
            if(i=='0'):ans+=(h+c1)
            else : ans+=c1
    else:
        for i in s:
            if(i=='1'):ans+=c1
            else : ans+=c0
    print(ans)
exit(0)