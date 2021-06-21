import sys
# from collections import Counter

# sys.stdin = open('input.txt', 'r')
# sys.stdout = open('output.txt', 'w')


t = int(input())
for _ in range(t):
	n = int(input())
	lis = sorted(map(int, input().strip().split()))

	index = -1
	minn = int(1e10)
	for i in range(1, n):
		if lis[i] - lis[i-1] < minn:
			minn = lis[i] - lis[i-1]
			index = i-1

	first = lis[index]
	sec = lis[index+1]

	lis[index] = -1
	lis[index+1] = -1

	print(first, end=" ")
	A=[];x=0
	while(x<n and lis[x]<first):
		A.append(lis[x])
		x+=1
	while(x<n):
		if lis[x] != -1:
			print(lis[x], end=' ')
		x+=1
	for i in A:
		if i != -1:
			print(i, end=' ')
	print(sec)