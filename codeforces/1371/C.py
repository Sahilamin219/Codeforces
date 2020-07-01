#---------------code----in----peace---
t=int(input())
# t=1
for _ in range(t):
	a,b,n,m=map(int,input().split())
	if(a<b):
		a,b=b,a
	if((a+b)>=(m+n) and (m<=b)):
		print("YES")
	else:
		print("NO")