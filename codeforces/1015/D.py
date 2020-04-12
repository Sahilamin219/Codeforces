# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
# import re 
# def negmod(a, m): 
#     return (a%m + m) % m 
# for C in range(int(input())):
# rawstr = ''.join([int(x) * '(' + x + ')' * int(x) for x in str(input())])
# for _ in range(9):
# rawstr = rawstr.replace(')(', '')
# print("Case #{}: {}".format(C+1, rawstr))
# t=int(input())
# while(t):
# 	t-=1
# 	pass
# 	n=int(input())
# 	l=[]
# 	regrex=""
# 	for i in range(0,n):
# 		l.append(str(input()))
# 		regrex+=l[i]
# 	# print(l,regrex,end=" ")
# 	for i in range(0,len(l)):
# 		match = re.match(regrex,l[i])
# 		print(match)
def get(now,distance):
	if(now - distance>0):
		return (now- distance)
	else:
		return(now+ distance)
n,k,s=map(int,input().split())
if((n-1)*k < s or k>s):
	print("NO")
else:
	print("YES")
	l=[]
	l.append(1)
	td=0
	dif=(s-td)
	while(k>0):
		walk=min(n-1,dif-k+1)
		p=get(l[-1],walk)
		# print(l[-1],p)
		l.append(p)
		k-=1
		dif-=walk
	for i in range (1,len(l)):
		print(l[i],end=" ")
# l=[1,2,3,4,5]
# print(l[1:-1])
