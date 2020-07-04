# from debug import debug
inf = int(1e6)

n = int(input())
lis = list(map(int, input().split()))
store = []
index = list(range(0, n))
for k in range(1, n):
	for _ in range(k):
		for i in range(1, k+1):
			if lis[i] < lis[i-1]:
				lis[i], lis[i-1] = lis[i-1], lis[i]
				index[i], index[i-1] = index[i-1], index[i]
				store.append((index[i]+1, index[i-1]+1))
store.reverse()
print(len(store))
for i in store:
	print(*i)