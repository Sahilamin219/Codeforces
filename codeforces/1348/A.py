t=int(input())
while(t):
	t-=1
	n=int(input())
	a=1
	sum1=(1<<n)
	sum2=0
	for i in range(1,n//2):
		sum1+=(1<<i)
	for i in range(n//2,n):
		sum2+=(1<<i)
	print(sum1-sum2)
