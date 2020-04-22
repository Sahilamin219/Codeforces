def comp(n):
	if(n<0):
		return -1
	return 1
t=int(input())
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	sum=0
	i=0
	while(i<n):
		j=i
		loc=l[i]
		while((j<n) and (comp(l[i])==comp(l[j]))):
			loc=max(loc,l[j])
			j+=1
		# print(loc,end=" ")
		sum+=loc
		if(j==n):
			break
		i=j
	print(sum)