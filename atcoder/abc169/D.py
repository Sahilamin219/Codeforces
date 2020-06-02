n=int(input())
ans=0
#it is the power of every prime number
#and as z is always a prime numer we should not bother about
# combiations of prime numer dividing N
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