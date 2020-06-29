import math
t=int(input())
for _ in range(t):
	n,k=map(int,input().split())
	ans=(k)+((k-1)//(n-1))
	print(ans)