import math
t=int(input())
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	nl=[]
	maxi=l[0]
	for i in range(0,n):
		if(maxi<l[i]):
			maxi=l[i]
		nl.append(maxi-l[i])
	k=max(nl)
	# x=(math.log2(k))
	if(k>0):
		# print('Logarithm value of Positive Number = %.0f' %math.log2(k))
		print(int(math.log2(k))+1)
	else:
		print(0)