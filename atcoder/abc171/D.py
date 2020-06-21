t=1
while t:
	t-=1
	n=int(input())
	# n,m=(map(int,input().split()))
	l=list(map(int,input().split()))
	c=[0 for i in range(100001)]
	sumi=sum(l)
	for i in range(n):
		c[l[i]]+=1
	q=int(input())
	while(q):
		q-=1
		a,b=map(int,input().split())
		sumi+=(c[a]*(b-a))
		c[b]+=c[a]
		c[a]=0
		print(sumi)
