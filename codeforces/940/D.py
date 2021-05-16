n = int(input())
a = list(map(int, input().split()))
b = input()

minl = int(-1e9)
maxr = int(1e9)

for i in range(4, n):
  if not (b[i-4] == b[i-3] == b[i-2] == b[i-1] != b[i]):
    continue
  #print('working for', i)
  if b[i] == '0':
    maxr = min(maxr+1, a[i], a[i-1], a[i-2], a[i-3], a[i-4])-1
  if b[i] == '1':
    minl = max(minl-1, a[i], a[i-1], a[i-2], a[i-3], a[i-4])+1

print(minl, maxr)