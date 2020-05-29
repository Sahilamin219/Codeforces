t=int(input())
while(t):
	t-=1
	n,m,k=map(int,input().split())
	a=(n//k)
	if(a<m):
		b=(m-(n//k))
		# print("b:",b,end=" ")
		if((b)%(k-1)>0):
			b=b//(k-1)
			b+=1
		else:
			b=b//(k-1)
		# print(a,b,end=": ")
		print(a-b)
	else:
		# print("ok",end=" ")
		print(min(a,m))