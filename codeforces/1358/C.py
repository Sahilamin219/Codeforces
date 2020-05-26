t=int(input())
while(t):
	t-=1
	x1,y1,x2,y2=map(int,input().split())
	m=(x2-x1)
	n=(y2-y1)
	print((m)*(n)+1)
