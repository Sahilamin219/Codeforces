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
# 	print("no input_file")

def ncr(n, k):
	return (math.factorial(n)//(math.factorial(n-k)*math.factorial(k)))%(10**9 + 7)

input=sys.stdin.readline
inf = 1e10
mod = int(1e9 + 7)
t=1;
t=int(input())
for _ in range(t):
	n,k=map(int , input().split())
	a=list(map(int, input().split()))
	a.sort()
	m=dict()
	for i in a:
		if(m.get(i,0) == 0) : m[i]=1
		else : m[i]+=1
	ind = n-k
	while( ind  < n-1 and a[ind+1] == a[ind] ) : ind += 1
	print( ncr(m[a[n-k]] , ind - (n-k) + 1) )