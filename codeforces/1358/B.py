t=int(input())
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	l.sort()
	l.append(-1)
	lis=[]
	lis.append(l[0])
	fre=[]
	k=1
	contain=0
	for i in range(1,n+1):
		contain+=1
		if(l[i]!=l[i-1]):
			lis.append(l[i])
			fre.append(k)
			k=1
		else:
			k+=1
	contain+=1
	# print(lis)
	# print(fre)
	# print(contain)
	i=len(lis)-2
	while(i>=0):
		if(contain>lis[i]):
			# print("take this :",lis[i])
			break
		else:
			contain-=fre[i]
			i-=1
	print(contain)
