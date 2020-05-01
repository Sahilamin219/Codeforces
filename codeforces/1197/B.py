t=1
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	flag=1
	for i in range(1,len(l)-1):
		if(l[i-1]>l[i] and l[i]<l[i+1]):
			flag=0
			break
	if(flag):
		print("YES")
	else:
		print("NO")