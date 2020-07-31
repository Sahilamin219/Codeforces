n,m=map(int,input().split())
l=list(map(int,input().split()))
ans=0
for i in range(m):
	x,y=map(int,input().split())
	ans+=min(l[x-1],l[y-1])
print(ans)