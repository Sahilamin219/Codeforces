# t=int(input())
t=1
for _ in range(t):
	# a,b,n,m=map(int,input().split())
	n,k=map(int,input().split())
	if(k==1):
		print(n)
	else:
		ans=1
		while(n):
			ans*=2
			n=(n//2)
		print(ans-1)