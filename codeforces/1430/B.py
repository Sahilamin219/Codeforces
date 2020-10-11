from fractions import Fraction
from decimal import Decimal
import math
mod = pow(10, 9) + 7
def sp(): return map(int, input().split())
def lit(): return list(sp())
t=int(input())
# t=1
# liaison
for _ in range(t):
    n,k=sp()
    l=lit()
    l.sort()
    ma=l[-1]
    mi=l[0]
    if(ma==mi):
        print( ma*(k+1))
    else:
        i=n-2;
        while(i>=0 and k):
            ma+=l[i]
            i-=1
            k-=1
        print(ma)

