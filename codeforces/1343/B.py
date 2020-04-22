t=int(input())
while(t):
	t-=1
	n=int(input())
	if(n%4==0):
		print("YES")
		m=n//2
		l=[]
		n=[]
		a=2
		l.append(a)
		b=1
		n.append(b)
		k=0
		s=0
		for _ in range(1,m):
			a+=2
			l.append(a)
		for _ in range(1,(m)-1):
			b+=2
			n.append(b)
		for i in l:
			s+=i
		# print("SIS",s)
		for i in n:
			k+=i
		# print("KIS",k)
		n.append(s-k)
		for i in l:
			print(i,end=" ")
		for i in n:
			print(i,end=" ")
		print()
	else:
		print("NO")