# t=int(input())
t=1
for _ in range(t):# a = [list(map(int, input().split())) for i in range(n)]
	n=int(input())
	# n,m=map(int,input().split())
	# l=list(map(int,input().split()))
	# ans[ord(s[i])-97]+=1
	nn=n
	cnt=0
	while(nn):
		nn=nn//10
		cnt+=1
	a=(n-cnt*9)
	a=max(a,0)
	l=[]
	for i in range(a,n):
		summ=i
		ii=i
		while(ii):
			summ+=ii%10
			ii=(ii//10)
		if(summ==n):
			l.append(i)
	print(len(l))
	print(*l)