t=int(input())
while(t):
	t-=1
	x,y=map(int,input().split())
	a,b=map(int,input().split())
	cost=0
	if(2*a<=b):
		cost=abs(x-y)*a + 2*a*(min(x,y))
	elif(a<b):
		cost=abs(x-y)*a + b*(min(x,y)-1) + b
	else:
		cost=abs(x-y)*a + b*(min(x,y)-1) + b
	print(cost)