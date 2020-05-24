t=int(input())
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	l.sort()
	odd=0
	even=0
	same=0
	if(l[0]%2):
			odd+=1
	else:
		even+=1
	for i in range(1,n):
		if(abs(l[i]-l[i-1])==1):
			same+=1
		if(l[i]%2):
			odd+=1
		else:
			even+=1
	if(even%2==0 and odd%2==0):
		print("YES")
	else:
		k=1
		f=1
		while(k<=same):
			if((odd-k)%2==0 and (even-k)%2==0):
				print("YES")
				f=0
				break
			else:
				k+=1
		if(f):
			print("NO")