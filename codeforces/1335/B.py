# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
# import re 
gg="abcdefghijklmnopqrstuvwxyz"
# def negmod(a, m): 
#     return (a%m + m) % m 
# for C in range(int(input())):
# rawstr = ''.join([int(x) * '(' + x + ')' * int(x) for x in str(input())])
# for _ in range(9):
# rawstr = rawstr.replace(')(', '')
# print("Case #{}: {}".format(C+1, rawstr))
# def f(n):
# 	if(n<=1):
# 		return 1
# 	elif(n==2):
# 		return 2
# 	else:
# 		return((f(n-1)*2)-1)
t=int(input())
while(t):
	t-=1
	n,a,b=map(int,input().split())
	b=min(a,b)
	r=(a%b)
	s=gg[:b]*(a//b) + gg[:r]
	# print(gg[b:a])
	# print(s)
	ans=""
	ans=s[:]
	for i in range(0,n-a):
		ans+=s[i%b]
		# print("yes")
	print(ans)
	# print(f(2*(n-1)))
	# ans=0
	# l=list(map(int,input().split()))
	# l.sort()
	# print(l)
	# if(n%2==0):
	# 	i=n//2
	# 	j=i-1
	# 	while(j>=0 and i<n):
	# 		print(l[j],end=" ")
	# 		print(l[i],end=" ")
	# 		j-=1
	# 		i+=1
	# else:
	# 	i=(n//2)+1
	# 	j=i-1
	# 	while(j>=1 and i<n):
	# 		print(l[j],end=" ")
	# 		print(l[i],end=" ")
	# 		i+=1
	# 		j-=1
	# 	print(l[0],end=" ")
	# print()
	# if(n<=1):
	# 	print(1)
	# elif(n==2):
	# 	print(2)
	# else:
	# 	ans=2
	# 	for i in range (1,n-1):
	# 		ans=(ans*2)-1
	# 	print(ans)

# 	l=[]
# 	regrex=""
# 	for i in range(0,n):
# 		l.append(str(input()))
# 		regrex+=l[i]
# 	# print(l,regrex,end=" ")
# 	for i in range(0,len(l)):
# 		match = re.match(regrex,l[i])
# 		print(match)
# def get(now,distance):
# 	if(now==distance):
# 		return (now+distance)
# 	elif(now - distance>0):
# 		return (now- distance)
# 	else:
# 		return(now+ distance)
# n,k,s=map(int,input().split())
# if((n-1)*k < s or k>s):
# 	print("NO")
# else:
# 	print("YES")
# 	l=[]
# 	l.append(1)
# 	td=0
# 	dif=(s-td)
# 	while(k>0):
# 		walk=min(n-1,dif-k+1)
# 		p=get(l[-1],walk)
# 		# print(l[-1],p)
# 		l.append(p)
# 		k-=1
# 		dif-=walk
# 	for i in range (1,len(l)):
# 		print(l[i],end=" ")
# # l=[1,2,3,4,5]
# # print(l[1:-1])



# sort(v.begin(), v.end(), comp);
# if(n% 2 == 0){
#     int y = n/2;
#     int x = y -1;
#     for(; x>=0 && y<n; x--, y++){
#         cout<<v[x]<<" "<<v[y]<<" ";
#     }
# }else{
#     int z = v[0];
#     n--;
#     int x = n/2;
#     int y = x + 1;  
#     for(; x>0 && y<n+1; x--, y++){
#         cout<<v[x]<<" "<<v[y]<<" ";
#     }
#     cout<<z;