t=int(input())
while(t):
	t-=1
	n=int(input())
	ans=0
	j=0
	k=0
	while(n>1):
		k+=2*(j)
		j+=1
		ans += 4*(n-1)*j + 4*k
		n-=2
	print(ans)
