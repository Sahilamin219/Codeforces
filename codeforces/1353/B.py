# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
# import re 
# import math
gg="abcdefghijklmnopqrstuvwxyz"
# def negmod(a, m): 
#     return (a%m + m) % m 
# for C in range(int(input())):
# rawstr = ''.join([int(x) * '(' + x + ')' * int(x) for x in str(input())])
# for _ in range(9):
# rawstr = rawstr.replace(')(', '')
# print("Case #{}: {}".format(C+1, rawstr))
# def f(n):
# 	if(n<=1):
# 		return 1
# 	elif(n==2):
# 		return 2
# 	else:
# 		return((f(n-1)*2)-1)

# dic={}
# def recur(n, count):
# 	m = n
# 	remain = []
# 	while(n>10):
# 	    if n%10 != 0:
# 	        remain.append(n%10)
# 	    n = n//10
# 	remain.append(n%10)
# 	if m in dic:
# 		# print("OK")
# 		return dic[m]
# 	if m==20:
# 		return 4+count
# 	elif m==10:
# 	    return 2+count
# 	elif m<10:
# 	    return 1+count
# 	elif m<20:
# 		return 3+count
# 	else:
# 		count=recur(m-max(remain),count+1)
# 		dic[m]=count
# 		print(dic)
# 		return count
# 	    # for i in remain:
# 	    #     count = min(recur(m-i, count)+1, count)
# k=int(input())
# if(k==0):
#     print(0)
# else:
#     print(recur(k,0))


t=int(input())
while(t):
	t-=1
	n,k=map(int,input().split())
	a=list(map(int,input().split()))
	b=list(map(int,input().split()))
	a.sort()
	b.sort(reverse=True)
	for i in range (0,k):
		if(a[i]<b[i]):
			a[i]=b[i]
	print(sum(a))
