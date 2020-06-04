t=int(input())
while (t):
	t-=1
	n,k=map(int,input().split())
	l=[]
	i=1
	while(i*i<=n):
		if(n%i==0):
			if(n==i*i):
				l.append(i)
			else:
				l.append(i)
				l.append(n//i)
		i+=1
	l.sort(reverse=True)
	for i in l:
		if(i<=k):
			print(n//i)
			break
