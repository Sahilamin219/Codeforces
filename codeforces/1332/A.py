t = int(input())
for _ in range(t):
	a, b, c, d = map(int, input().split())
	x, y, x1, y1, x2, y2 = map(int, input().split())
	x += b - a
	y += d - c
	if a + b > 0 and x1 == x2:
		print("No")
	elif c + d > 0 and y1 == y2:
		print("No")
	elif x1 <= x <= x2 and y1 <= y <= y2:
		print("Yes")
	else:
		print("No")