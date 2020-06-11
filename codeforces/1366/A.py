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
	nn,mm=map(int,input().split())
	if(nn==0 or mm==0):
		print(0)
	elif(mm>2*nn or nn>2*mm):
		print(min(mm,nn))
	else:
		print((mm+nn)//3)

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