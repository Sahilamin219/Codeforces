t=1
while t:
	t-=1
	n,m=(map(int,input().split()))
	l=list(map(int,input().split()))
	l.sort()
	i=0
	sumi=0
	while(i<m):
		sumi+=l[i]	
		i+=1
	print(sumi)