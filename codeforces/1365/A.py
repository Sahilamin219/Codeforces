def mycool(i,j,l):
	for oo in range(m):
		if(l[i][oo]==1):
			return 0
	for oo in range(n):
		if(l[oo][j]==1):
			return 0
	return 1
t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	l = []
	for i in range(n):
		r = list(map(int, input().split()))
		l.append(r[:])
	cnt=0
	for i in range(n):
		for j in range(m):
			if(mycool(i,j,l)):
				cnt+=1
				l[i][j]=1
	if(cnt%2):
		print("Ashish")
	else:
		print("Vivek")