for _ in range(int(input())):
	n, k = map(int, input().split())
	ls = list(map(int, input().split()))
	ls.sort()
	mn = ls[0]
	cnt = 0
	for i in range(1, n):
		cnt += (k - ls[i]) // mn
	print(cnt)

