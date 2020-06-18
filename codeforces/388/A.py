# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
# t=int(input())
t=1
while t:
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	l.sort()
	ans=1
	for i in range(n):
		if(l[i]<i//ans):
			ans+=1
	print(ans)