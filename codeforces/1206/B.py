#BAKWAS CODE HAT YAHA SAI
# t=int(input())
t=1
while t:
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	cnt=0
	o=0
	f=0
	for i in l:
		if(i>1):
			cnt+=(i-1)
		elif(i<=-1):
			cnt+=(abs(i)-1)
			o+=1
		elif(i==0):
			f=1
			cnt+=1
	if(o%2 and f):
		cnt+=0
	elif(o%2):
		cnt+=2
	print(cnt)