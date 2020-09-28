n,m,k = map(int, input().split())
print (m*(m-1)//2)
for i in range(m):
	for j in range(i+1, m):
		print (j+1, i+1) if k else print (i+1, j+1)

