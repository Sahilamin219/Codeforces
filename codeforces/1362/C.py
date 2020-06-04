t=int(input())
while (t):
	t-=1
	n=int(input())
	i=1
	ans=0
	# bits = n.bit_length()
	# print(bits)
	while(i<=n):
		ans+=(n//i)
		i=(i*2)
	print(ans)