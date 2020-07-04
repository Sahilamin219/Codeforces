# import re 
# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
from sys import stdin, stdout
# gg="abcdefghijklmnopqrstuvwxyz"
# def negmod(a, m): 
#     return (a%m + m) % m 
# for C in range(int(input())):
# rawstr = ''.join([int(x) * '(' + x + ')' * int(x) for x in str(input())])
# for _ in range(9):
# rawstr = rawstr.replace(')(', '')
# print("Case #{}: {}".format(C+1, rawstr))
# sort(v.begin(), v.end(), comp);
# import time
# max_execution_time=5
# start_time=time.clock()
# elapsed_time=0
# while elapsed_time<max_execution_time:
# 	elapsed_time=time.clock = start_time
import math
from itertools import permutations 
def allPermutations(string):        
    listi = permutations(string) 
    for i in list(listi): 
        print(''.join(i)) 
t=int(input())
# t=1
for _ in range(t):
	n,m=map(int,input().split())
	a = [list(map(int, input().split())) for i in range(n)]
	flag=0
	for i in range(n):
		for j in range(m):
			if(a[i][j]>2 and ((i==0 and j==0) or (i==n-1 and j==m-1) or (i==0 and j==m-1) or (i==n-1 and j==0))):
				flag=1
				break
			elif(a[i][j]>3 and (i==0 or j==0 or i==n-1 or j==m-1)):
				flag=1
				break
			elif(a[i][j]>4):
				flag=1
				break
			else:
				a[i][j]=4
	if(flag):
		print("NO")
	else:
		print("YES")
		print(2,"3 "*(m-2),end="")
		print(2)
		for i in range(n-2):
			for j in range(m):
				if(j==0 or j==m-1):
					print(3,end=" ")
				else:
					print(a[i][j],end=" ")
			print()
		print(2,"3 "*(m-2),end="")
		print(2)
	# https://codeforces.com/contest/965/submission/37617515
	# https://recommender.codedrills.io/recommendations/a84cb4e1-1d54-4e0f-8f64-de726b77d05b
	# https://recommender.codedrills.io/recommendations/ebfb9d6e-fbd3-434e-89fb-8070b449c9ed
	# https://codeforces.com/problemset/problem/264/A
	# https://codeforces.com/problemset/problem/276/C
# def main():
# for _ in range(int(input())):
#     _, s = input(), input()
#     print(('NO', 'YES')[all((ord(a) - ord(b)) in (-2, 0, 2) for a, b in zip(s, s[::-1]))])
# if __name__ == '__main__':
# 	main()