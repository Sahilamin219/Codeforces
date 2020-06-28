# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
import math
#use ord() for ascii
# def fun(l,r):
# 	if(l>r):
# 		return 
# 	m=(l+r)//2
# 	c.append([l-r,m])
# 	# c[m]=(r-l,l)
# 	fun(l,m-1)
# 	fun(m+1,r)
def perform_bubble_sort(blist):
	cmpcount, swapcount = 0, 0
	blist=list(map(int,input().split()))
	for j in range(len(blist)):
	        for i in range(1, len(blist)-j):
	                cmpcount += 1
	                if blist[i-1] > blist[i]:
	                	swapcount += 1
	                	blist[i-1], blist[i] = blist[i], blist[i-1]
	print(swapcount)
def fun(l,c,d):
	if(c==n):
		return d
	if(c%2==0):
		d=max(fun(l[:-1],c+1,d+l[-1]),fun(l[1:],c+1,d+l[0]))
	else:
		d=min(fun(l[1:],c+1,d-l[0]),fun(l[:-1],c+1,d-l[-1]))
	return d
t=int(input())
# t=1
while t:#a = [list(map(int, input().split())) for i in range(n)]	
	t-=1
	# l=list(map(int,input().split()))
	# a=[0 for i in range(n+1)]
	x,y,n=map(int,input().split())
	if(n%x==y):
		print(n)
	else:
		k=(n%x)
		a=0
		if(k<y):
			a=(n-x+abs(k-y))
		else:
			a=(n-abs(k-y))
		print(a)
		# print(((n-y)//x)*x)

	# print(((n//x)+y)*x)






	# N, S = map(int,input().split())
	# A = list(map(int,input().split()))
	# mod = 998244353
	# dp = [[0 for j in range(S + 1)] for i in range(N + 1)]
	# dp[0][0] = 1
	# for i in range(N) : 
	#     for j in range(S + 1) : 
	#         dp[i + 1][j] += 2 * dp[i][j]
	#         dp[i + 1][j] %= mod 
	#         if j + A[i] <= S : 
	#             dp[i + 1][j + A[i]] += dp[i][j]
	#             dp[i + 1][j + A[i]] %= mod
	# print(dp[N][S])




# stdout.flush()
# https://codeforces.com/contest/1320/problem/A
# https://codeforces.com/contest/431/problem/B
# a_dictionary = {"a": 1, "b": 2, "c": 3}
# max_key = max(a_dictionary, key=a_dictionary.get)
# a_dictionary = {"a": 1, "b": 2, "c": 3}
# all_values = a_dictionary.values()
# max_value = max(all_values)
# ans1=sorted(d.items(), key=lambda x:x[1], reverse=True)[0][1]

# n=int(input())
# 	a=0;b=0
# 	while(n%2==0):
# 		n//=2
# 		a+=1
# 	while(n%3==0):
# 		n//=3
# 		b+=1
# 	if(n>1):
# 		print(-1)
# 	elif(a>b):
# 		print(-1)
# 	else:
# 		print((b-a)+b)