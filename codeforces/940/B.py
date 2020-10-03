n,k,a,b,s=int(input()),int(input()),int(input()),int(input()),0
if(k>1):
    while(((n//k)*(k-1)*a)>b):
        s+=(n%k)*a+b
        n//=k
print(int(s+(n-1)*a))