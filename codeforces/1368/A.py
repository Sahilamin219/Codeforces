# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
def  countSetBits(n): 
    count = 0
    while (n): 
        count += n & 1
        n >>= 1
    return count 
import math
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
	n,m,p=(map(int,input().split()))
	ans=0
	while(n<=p or m<=p):
		if(n>p or m>p):
			break
		if(m>=n):
			n+=m
			ans+=1
		else:
			m+=n
			ans+=1
		if(n>p or m>p):
			break
	print(ans)
	# a=list(map(int,input().split()))
	# b=list(map(int,input().split()))
	# # c={}
	# # for i in range(n):
	# # 	if(b[i]!=0):
	# # 		val = a[i]/b[i]
	# # 		if val in c:
	# # 			c[val]+=1
	# # 		else:
	# # 			c[val]=1
	# d={}
	# for i in range(n):
	# 	if(a[i]!=0):
	# 		val = b[i]/a[i]
	# 		if val in d:
	# 			d[val]+=1
	# 		else:
	# 			d[val]=1
	# cnt_zero=0
	# flag=1
	# for i in range(n):
	# 	if(a[i]==0 and b[i]==0):
	# 		cnt_zero+=1
	# 		flag=0
	# if(max(a)==0 and flag):
	# 	print(0)
	# else:
	# 	ans1=0
	# 	ans2=0
	# 	if(max(a)>0):
	# 		ans1=sorted(d.items(), key=lambda x:x[1], reverse=True)[0][1]
	# 	# if(max(b)>0):
	# 	# ans2=sorted(c.items(), key=lambda x:x[1], reverse=True)[0][1]
	# 	# print(sorted(d.items(), key=lambda x:x[1], reverse=True))
	# 	print(max(ans1,ans2)+cnt_zero)

		
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
