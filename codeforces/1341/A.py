t=int(input())
while(t):
	t-=1
	n,a,b,c,d=map(int,input().split())
	if(n*(a-b)>c+d  and n*(abs(a-b))>abs(c-d)):
		print("NO")
		# print(n*(a+b),c+d,n*(abs(a-b)),abs(c-d))
	elif(n*(a+b)<c-d  and n*(abs(a-b)<abs(c-d))):
		print("NO")
		# print(n*(a+b),c+d,n*(abs(a-b)),abs(c-d))
	# elif(n*(a+b)>abs(c-d)):
	# 	print("NO")
	# 	print(n*(a+b),c+d,n*(abs(a-b)),abs(c-d))
	# elif(n*(abs(a+b))<abs(c-d)):
	# 	print("NO")
	# 	print(n*(a+b),c+d,n*(abs(a-b)),abs(c-d))
	else:
		print("YES")
		# print(n*(a+b),c+d,n*(abs(a-b)),abs(c-d))