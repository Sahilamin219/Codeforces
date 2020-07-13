t=1
for _ in range(t):
	n=int(input())
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