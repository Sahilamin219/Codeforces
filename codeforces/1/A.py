t=1
while (t):
	t-=1
	n,m,a=map(int,input().split())
	l=0
	b=0
	if(m%a!=0):
		l=(m)//a+1
	else:
		l=m//a
	if(n%a!=0):
		b=(n//a)+1
	else:
		b=(n//a)
	print(l*b)
	