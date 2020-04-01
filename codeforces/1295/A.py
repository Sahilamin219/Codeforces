# import sys 
# sys.stdin = open('input2.txt', 'r') 
# sys.stdout = open('output2.txt', 'w') 
t=int(input())
while(t>0):
	t-=1
	n=int(input())
	if(n%2==0):
		n/=2
		while(n>0):
			print(1,end="")
			n-=1
	else:
		print(7,end="")
		n-=3
		n/=2
		while(n>0):
			print(1,end="")
			n-=1
	print()