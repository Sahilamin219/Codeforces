t=1
while(t):
	t-=1
	m,n=map(int,input().split())
	l=[1 for i  in range(n+1)]
	count=n
	while(m):
		m-=1
		a,b=map(int,input().split())
		if(a==b):
			if(l[a]==1):
				l[a]=0
				count-=1
		else:
			for i in range(a,b+1):
				if(l[i]==1):
					l[i]=0
					count-=1
	print(count)
	for i in range(1,n+1):
		if (l[i]==1):
			print(i,end=" ")
	print()