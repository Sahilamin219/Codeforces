import sys 
# import math
from math import *
# from operator import add
# from itertools import permutations 
# import itertools
# try:
# 	sys.stdin = open('input.txt', 'r') 
# 	sys.stdout = open('output.txt', 'w')
# except noerror:
# 	print("no input_file")
input=sys.stdin.readline
inf = 1e10
mod = int(1e9 + 7)
t=1;
t=int(input())
for _ in range(t):
	n, m = map(int, input().split())
	s = [1 if i=='+' else -1 for i in input()]
	la=[0]*n
	lb=[0]*n
	lc=[0]*n
	a=b=c=0
	for i in range(1, n):
		c += s[i-1]
		a = min(a, c)
		b = max(b, c)
		la[i], lb[i], lc[i] = a, b, c

	a=b=c=0
	ra=[0]*n
	rb=[0]*n

	for i in range(n-2, -1, -1):
		a , b = min (0, a + s[i+1]) , max(0, b + s[i+1])
		ra[i], rb[i] = a, b

	for _ in range(m):
		i, j = map(int, input().split())
		i-=1;j-=1
		print(max(lb[i],rb[j]+lc[i])-min(la[i],ra[j]+lc[i])+1)