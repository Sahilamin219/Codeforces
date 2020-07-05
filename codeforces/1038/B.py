# t=int(input())
tt=1
while tt:
	tt-=1
	#a = [list(map(int, input().split())) for i in range(n)]
	n=int(input())
	# l=list(map(int,input().split()))
	if(n<3):
		print("No")
	else:
		print("Yes")
		a=[];b=[]
		i=1
		while(i<n+1):
			a.append(i)
			i+=1
			if(i>=n+1):
				break
			b.append(i)
			i+=1
		print(len(a),*a)
		print(len(b),*b)