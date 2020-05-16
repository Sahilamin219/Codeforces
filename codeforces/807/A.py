def solve():
	n=int(input())
	l=[[0 for i in range(0,2)] for j in range(0,n)]
	for i in range(0,n):
		l[i][0],l[i][1]=map(int,input().split())
	mini=l[0][0]
	f=0
	if(l[0][0]!=l[0][1]):
		print("rated")
		return
	for i in range(1,n):
		if(l[i][0]<mini):
			mini=l[i][0]
		if(l[i][0]!=l[i][1]):
			print("rated")
			return
		elif(l[i][0]==l[i][1]):
			if(l[i][0]>mini):
				f=1
	if(f):
		print("unrated")
		exit()
	print("maybe")
t=1
while(t):
	t-=1
	solve()