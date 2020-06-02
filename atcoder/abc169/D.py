n=int(input())
ans=0
for i in range(2,1000010):
	power=0
	j=1
	if(n%i==0):
		while(n%i==0):
			power+=1
			n=(n//i)
		while(power>=j):
			power-=j
			j+=1
			ans+=1
if(n>1):
	ans+=1
print(ans)