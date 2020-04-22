t=int(input())
while(t):
	t-=1
	n=int(input())
	# m=log2(n)
	a=1
	s=3
	while(s<n):
		if(n%s==0):
			break
		a+=1
		s+=pow(2,a)
	# for i in range(3,n):
	# 	if(n%i==0):
	# 		s=i
	# 		break
	# 	else:
	# 		a+=1
	# 		i+=(pow(2,a))
	# 		if(n%i==0):
	# 			s=i
	# 			break
	print(n//s)