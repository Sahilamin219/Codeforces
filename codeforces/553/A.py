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
inf = 1e10
mod = int(1e9 + 7)
def NcR(n, r):
	"""
    p holds the value of n*(n-1)*(n-2)...,
    k holds the value of r*(r-1)... 
    C(n, r) == C(n, n-r),
    choosing the smaller value """
	p = 1
	k = 1
	if (n - r < r):r = n - r
	if (r != 0):
		while (r):
			p *= n
			k *= r
			m = gcd(p, k)
			"""
			gcd of p, k
			dividing by gcd, to simplify product
			division by their gcd saves from the overflow"""
			p //= m
			k //= m
			n -= 1
			r -= 1
	return p
t=1;# t=int(input())
for _ in range(t):
	k=int(input())
	total=int(input())
	res=1
	for i in range(1,k):
		c=int(input())
		res = (res*NcR(total + c-1, c-1))%mod
		total+=c
	print(res)