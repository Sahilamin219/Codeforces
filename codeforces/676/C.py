def solve(middle,s,k):
	aa=0
	bb=0
	f=0
	for i in range(0,middle):
		if(s[i]=='a'):
			aa+=1
		else:
			bb+=1
	if(min(aa,bb)<=k):
		f=1
	for i in range(0,len(s)-middle):
		if(s[i]=='a'):
			aa-=1
		else:
			bb-=1
		if(s[i+middle]=='a'):
			aa+=1
		else:
			bb+=1
		if(min(aa,bb)<=k):
			f=1
	return f
# t=int(input())
n,k=map(int,input().split())
s=str(input())
left=1
right=n+1
while(left+1!=right):
	middle=(left+right)//2
	if(solve(middle,s,k)):
		left=middle
	else:
		right=middle
print(left)