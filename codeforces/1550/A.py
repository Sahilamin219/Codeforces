def maxSum(x):
	return x ** 2

def getAns(x):
	res = 1
	while maxSum(res) < x:
		res += 1
	return res

def main():
	t = int(input())
	for i in range(t):
		print(getAns(int(input())))

main()