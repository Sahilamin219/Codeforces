t=int(input())
while t:
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	parity=list(map(int,input().split()))
	mybookmark=1
	fddd=0
	if(n==1):
		print("YES")
		mybookmark=0
	if(mybookmark):
		for i in range(1,n):
			if(l[i-1]>l[i]):
				fddd=1
				break
			elif(i==n-1):
				print("YES")
		if(fddd):
			ff=1
			for i in range(1,n):
				if(parity[i]!=parity[i-1]):
					print("YES")
					ff=0
					break
			if(ff):
				print("NO")