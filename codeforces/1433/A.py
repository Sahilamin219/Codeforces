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
# liaison
for _ in range(t):
    n=int(input())
    l= [1,11,111,1111, 2,22,222,2222, 3,33,333,3333, 4,44,444,4444, 5,55,555,5555, 6,66,666,6666 ,7,77,777,7777,
    8,88,888,8888, 9,99,999,9999]
    cnt=0;
    moves=[1,2,3,4]
    j=0;
    for i in range(len(l)):
        cnt+=moves[j];
        j+=1;
        j=j%4;
        if(l[i]==n):
            print(cnt)
