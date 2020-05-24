t=int(input())
while(t):
	t-=1
	m,n=map(int,input().split())
	a=min(m,n)
	c=max(m,n)
	b=max(2*a,c)
	print(int(b*b))