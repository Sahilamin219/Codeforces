# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
import math
# import re
gg="abcdefghijklmnopqrstuvwxyz"
# a=ord('a')
# print(chr(a), end="")
#sys.setrecursionlimit(int(1e6))
# n, m = map(int, input().split())
# graph = [[] for i in range(n)]
# for i in range(m):
# 	a,b = map(int, input().split())
# 	graph[a-1].append(b-1)
# 	graph[b-1].append(a-1)

# def dfs(node, count, visited):
# 	visited[node] = 1
# 	count[0]+=1
# 	for i in graph[node]:
# 		if not visited[i]:
# 			dfs(i, count, visited)


# visited = [0]*n
# t = 0
# node = None
# for i in range(n):
# 	if not visited[i]:
# 		count = [0]
# 		dfs(i, count, visited)
# 		if t<count[0]:
# 			t = max(t, count[0])
# 			node = i
# visited = [0]*n
# e = [0]
# dfs(node, e, visited)
# print(t)
# print(*visited)
n,m=map(int,input().split())
# a=math.pow(n,m)
a=m*math.log(n)
# b=math.pow(m,n)
b=n*math.log(m)

# print(a,b)
if(a>b):
	print(">")
if(a==b):
	print("=")
if(a<b):
	print("<")