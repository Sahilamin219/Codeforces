t=int(input())
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	dif=1001
	l.sort()
	flag=0
	for i  in range(1,n):
		if(l[i]==l[i-1]):
			flag=1
			break
	if(flag):
		print(0)	
	else:
		for i in range(1,n):
			d=l[i]-l[i-1]
			if(d<dif):
				dif=d
		print(dif)