# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
def  countSetBits(n): 
    count = 0
    while (n): 
        count += n & 1
        n >>= 1
    return count 
import math
def mycool(i,j,l):
	for oo in range(m):
		if(l[i][oo]==1):
			return 0
	for oo in range(n):
		if(l[oo][j]==1):
			return 0
	return 1
t=int(input())
while t:
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	parity=list(map(int,input().split()))
	mybookmark=1
	fddd=0
	if(n==1):
		print("YES")
		mybookmark=0
	if(mybookmark):
		for i in range(1,n):
			if(l[i-1]>l[i]):
				fddd=1
				break
			elif(i==n-1):
				print("YES")
		if(fddd):
			ff=1
			for i in range(1,n):
				if(parity[i]!=parity[i-1]):
					print("YES")
					ff=0
					break
			if(ff):
				print("NO")
	# n,m=map(int,input().split())
	# l = []
	# for i in range(n):