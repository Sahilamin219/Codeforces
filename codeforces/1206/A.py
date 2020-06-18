t=1
while t:
	t-=1
	n=int(input())
	a=list(map(int,input().split()))
	m=int(input())
	b=list(map(int,input().split()))
	print(max(a),max(b))