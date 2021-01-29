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

class Node:

	def __init__(self, data):

		self.left = None
		self.right = None
		self.data = data

	def insert(self, data):
# Compare the new value with the parent node
		if self.data:
			if data < self.data:
				if self.left is None:
					self.left = Node(data)
				else:
					self.left.insert(data)
			elif data > self.data:
				if self.right is None:
					self.right = Node(data)
				else:
					self.right.insert(data)
		else:
			self.data = data

# Print the tree
	def PrintTree(self):
		if self.left:
			self.left.PrintTree()
		print( self.data),
		if self.right:
			self.right.PrintTree()

input=sys.stdin.readline
inf = 1e10
mod = int(1e9 + 7)
t=1;
# t=int(input())
for _ in range(int(input())):
    n, k = map(int, input().split())
    lis = list(map(int, input().split()))

    start = lis[0]

    s = start
    
    for i in range(1, n):
        inf = 100 * lis[i] / s
        if inf > k:
            ns = ceil(100 *lis[i] / k )
            lis[0] += ns - s
            s = ns
        s += lis[i]
    print(int(lis[0] - start))