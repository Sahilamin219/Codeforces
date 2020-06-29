import math
t=int(input())
for _ in range(t):
	n=int(input())
	cnt=0
	l=[]
	p=0
	while(n):
		if(n%10):
			l.append((n%10)*pow(10,p))
			cnt+=1
		n=(n//10)
		p+=1
	print(cnt)
	l.reverse()
	print(*l)