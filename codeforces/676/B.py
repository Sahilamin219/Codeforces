n,t=map(int,input().split())
glass=[[0 for i in range(0,n+1)] for j in range(0,n+1)]
ans=0
glass[0][0]=t
for i in range(0,n):
	for j in range(0,i+1):
		if(glass[i][j]>=1.0):
			t=glass[i][j]-1
			glass[i+1][j]+=(t/2)
			glass[i+1][j+1]+=(t/2)
			ans+=1
print(ans)