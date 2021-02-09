import sys 
import math
from math import *
from operator import add
from itertools import permutations 
import itertools
# try:
# 	sys.stdin = open('input.txt', 'r') 
# 	sys.stdout = open('output.txt', 'w')
# except noerror:
# 	pass

def ncr(n, k):
	return (math.factorial(n)//(math.factorial(n-k)*math.factorial(k)))%(10**9 + 7)

input=sys.stdin.readline
inf = 1e10
mod = int(1e9 + 7)
t=1;
t=int(input())
for _ in range(t):
    # n, k= map(int, input().split())
    # v=list(map(int, input().split()))
    s=input()
    # print(len(s))
    for i in range(len(s)-1):
        if(i%2==0):
            if(s[i]=='a'):print('b', end="")
            else :print('a', end="")
        else: 
            if(s[i]=='z'):print('y', end="")
            else :print('z', end="")
    print()