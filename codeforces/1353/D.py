def bubble_sort(c):
    n = len(c)
    for i in range(n):
        already_sorted = True
        for j in range(n - i - 1):
            if c[j][0] < c[j+1][0]:#it is according to the no of zeros
                c[j][0], c[j+1][0] = c[j+1][0], c[j][0]
                already_sorted = False
            if(c[j][0]==c[j+1][0]):
            	if(c[j][1]>c[j+1][1]):#this is for frsts come find
            		c[j][1], c[j+1][1] = c[j+1][1], c[j][1]
        if already_sorted:
            break
    return c

def fun(l,r):
	if(l>r):
		return 
	m=(l+r)//2
	c.append([l-r,m])
	# c[m]=(r-l,l)
	fun(l,m-1)
	fun(m+1,r)
t=int(input())
while t:
	t-=1
	n=int(input())
	a=[0 for i in range(n)]
	c=[]
	fun(0,n-1)
	# c=bubble_sort(c)
	c.sort()
	# for i in range(n):
		# print(c[i][0],c[i][1],end=",")
	# print()
	for i in range(1,n+1):
		idi=c[i-1][1]
		a[idi]=i
	print(*a)
