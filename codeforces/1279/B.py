# from debug import debug
import sys
inf = int(1e10)
input = sys.stdin.readline

t = int(input())
while t:
	t-=1
	n, s = map(int, input().split())
	lis = list(map(int, input().split()))
	m = 0
	index = -1
	val = 0
	ans = 0
	for i in range(n):
		if m<lis[i]:
			m = lis[i]
			index = i
		val += lis[i]
		if val > s:
			if val-m<=s:
				ans = index+1
			break
	print(ans)