# t=int(input())
t=1
# see u codeforces on 11-07-2020..bye bye
for _ in range(t):
	# n=int(input())
	n,m=map(int,input().split())
	# l=list(map(int,input().split()))
	if(n&1):
		n+=1
	if(n+2>m):
		print(-1)
	else:
		print(n,n+1,n+2)