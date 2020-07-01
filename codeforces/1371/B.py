t=int(input())
# t=1
for _ in range(t):
	# a,b,n,m=map(int,input().split())
	n,m=map(int,input().split())
	if(n<=m):
		print((n*(n-1)//2)+1)
	else:
		print((m*(m+1))//2)