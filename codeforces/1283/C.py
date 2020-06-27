# t=int(input())
t=1
while t:#a = [list(map(int, input().split())) for i in range(n)]	
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	a=[0 for i in range(n+1)]
	for i in l:
		a[i]=1
	# print(a)
	b=[]
	for i in range(n+1):
		if(a[i]==0):
			b.append(i)
	# if(len(b)>0):
	# 	b.append(b[0])
	# print(b)
	# for i in range(len(b)-1):
	# 		for j in range(n):
	# 			if(l[j]==0 and j+1!=b[i+1]):
	# 				l[j]=b[i+1]
	# 				break
	c=[]
	for i in range(n):
		if l[i]==0:
			c.append(i+1)
	c.sort()#gift nahi diya
	b.sort()#gift nahi mila
	# print(c)
	for i in range(len(b)):
		if(b[i]==c[i] and i==0):
			b[i],b[i+1]=b[i+1],b[i]
		elif(b[i]==c[i]):
			b[i],b[i-1]=b[i-1],b[i]
	# print(c)
	cnt=0
	for i in range(n):
		if(l[i]==0):
			l[i]=b[cnt]
			cnt+=1
	print(*l)
