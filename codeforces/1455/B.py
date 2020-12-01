for _ in range(int(input())):
	n=int(input())
	s,i=1,1
	while(s<n):i+=1;s+=i
	print(i + (n+1==s) )	