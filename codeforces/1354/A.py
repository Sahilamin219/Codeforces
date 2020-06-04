t=int(input())
while (t):
	t-=1
	a,b,c,d=map(int,input().split())
	if(b>=a):
		print(b)
	else:
		if(d>=c):
			print(-1)
		else:
			dif=(a-b)
			i=(a-b)//(c-d)
			if((a-b)%(c-d)!=0):
				i+=1
			print(b+i*c)