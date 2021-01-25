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
input=sys.stdin.readline

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

inf = 1e10
mod = int(1e9 + 7)
t=1;
t=int(input())
for _ in range(t):
	a,b,k=map(int , input().split())
	d={}
	ans = k*(k-1)//2
	for m in map(int, input().split()):
		if m in d:
			d[m]+=1
		else:
			d[m]=1
	for i in d:
		ans -= d[i]*(d[i]-1)//2
	d={}
	for m in map(int, input().split()):
	
		if m in d:
			d[m]+=1
		else:
			d[m]=1
	for i in d:
		ans -= d[i]*(d[i]-1)//2
	print(ans)