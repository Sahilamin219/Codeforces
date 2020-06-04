t=int(input())
while (t):
	t-=1
	n,k=map(int,input().split())
	while(k>1):
		k-=1
		mxd=1
		mid=10
		nn=n
		while(nn):
			# print(int(nn),end=" ")
			mxd=max(mxd,nn%10)
			mid=min(mid,nn%10)
			nn=(nn//10)
		if(mid==0):
			break
		# print(int(mid),int(mxd))
		n=n+mxd*mid
	print(int(n))
