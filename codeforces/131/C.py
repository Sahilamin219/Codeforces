# import sys 
# sys.stdin = open('input2.txt', 'r') 
# sys.stdout = open('output2.txt', 'w') 
# # stdin = input()
# # n,m,t = stdin.split()
# # n = int(n)
# # m = int(m)
# # t = int(t)
n,m,t=map(int,input().split())
def factorial(n):
	if(n<=1):
		return 1
	else:
		return n*(factorial(n-1))

def ncr(n,r):
	return factorial(n)//factorial(r)//factorial(n-r)
total=0
for i in range (4,n+1):
	if(t-i>0):
	 	total += ncr(n,i)*ncr(m,t-i)
print(total)