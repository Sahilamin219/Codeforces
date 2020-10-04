
from math import ceil, floor, gcd, fabs, factorial, fmod, sqrt, inf
from fractions import Fraction
from decimal import Decimal
import math
mod = pow(10, 9) + 7
def sp(): return map(int, input().split())
def sli(): return list(sp())
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
# liaison
for _ in range(t):
    n,m=sp()
    l=[ [0]*4 for i in range(n) ]
    for i in range(n):
        a,b=sp()
        c,d=sp()
        l[i][0]=a;l[i][1]=b;l[i][2]=c;l[i][3]=d;
    # print(l)
    if(m%2):print("NO")
    elif(m==2):
        f=1;
        for i in range(n):
            if(l[i][1]==l[i][2]):
                f=0;print("YES");break;
        if(f):print("NO")
    else:
        f=1;
        for i in range(n):
            if(l[i][1]==l[i][2]):
                f=0;print("YES");break;
        if(f):print("NO")
        # print()
    # print()
    
    # nw  = (struct dll*)malloc(sizeof(struct dll));