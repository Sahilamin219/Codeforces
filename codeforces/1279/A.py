# from debug import debug
import sys
inf = int(1e10)
input = sys.stdin.readline

t = int(input())
while t:
	t-=1
	a,b,c = sorted(map(int, input().split()))
	if c-1 <= a+b:
		print("Yes")
	else:
		print("No")
