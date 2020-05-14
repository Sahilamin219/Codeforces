# import sys 
# sys.stdin = open('input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')
# import re 
# import math
# gg="abcdefghijklmnopqrstuvwxyz"
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

# dic={}
# def recur(n, count):
# 	m = n
# 	remain = []
# 	while(n>10):
# 	    if n%10 != 0:
# 	        remain.append(n%10)
# 	    n = n//10
# 	remain.append(n%10)
# 	if m in dic:
# 		# print("OK")
# 		return dic[m]
# 	if m==20:
# 		return 4+count
# 	elif m==10:
# 	    return 2+count
# 	elif m<10:
# 	    return 1+count
# 	elif m<20:
# 		return 3+count
# 	else:
# 		count=recur(m-max(remain),count+1)
# 		dic[m]=count
# 		print(dic)
# 		return count
# 	    # for i in remain:
# 	    #     count = min(recur(m-i, count)+1, count)
# k=int(input())
# if(k==0):
#     print(0)
# else:
#     print(recur(k,0))


t=int(input())
while(t):
	t-=1
	n,m=map(int,input().split())
	if(n==1):
		print(0)
	elif(n==2):
		print(m)
	else:
		print(2*m)
	# l=list(map(int,input().split()))
	# nl=[]
	# maxi=l[0]
	# for i in range(0,n):
	# 	if(maxi<l[i]):
	# 		maxi=l[i]
	# 	nl.append(maxi-l[i])
	# k=max(nl)
	# # x=(math.log2(k))
	# if(k>0):
	# 	# print('Logarithm value of Positive Number = %.0f' %math.log2(k))
	# 	print(int(math.log2(k))+1)
	# else:
	# 	print(0) 	

	# count_max=0
	# count_min=n
	# l.sort()
	# for i in range(1,len(l)-1):
	# 	tmp=0
	# 	for j in range(i,len(l)-1):
	# 		if(l[j-1]-l[j]<=2):
	# 			tmp+=1
	# 	if(tmp>count_max):
	# 		count_max=tmp
	# 	if(tmp<count_min):
	# 		count_min=tmp
	# print(count_min, count_max)

	# x,n,m=map(int,input().split())
	# f=1
	# # print(x,n,m)
	# while(x>0):
	# 	if(x<=20 and m>0 and n>0):
	# 		x-=10
	# 		m-=1
	# 		if(x<1):
	# 			break
	# 	elif(x>20 and m>0 and n>0):
	# 		x=(x//2)+10
	# 		n-=1
	# 		if(x<1):
	# 			break


	# 	elif(((x//2)+10)>=(x-10) and m>0):
	# 		x-=10
	# 		m-=1
	# 		if(x<1):
	# 			break
	# 	elif(((x//2)+10)<=(x-10) and n>0):
	# 		x=(x//2)+10
	# 		n-=1
	# 		if(x<1):
	# 			break
	# 	elif(n<1 and m>0):
	# 		x-=10
	# 		m-=1
	# 		if(x<1):
	# 			break
	# 	elif(m<1 and n>0):
	# 		x=(x//2)+10
	# 		n-=1
	# 		if(x<1):
	# 			break
	# 	elif(n<1 and m<1 and x>0):
	# 		f=0
	# 		print("NO")
	# 		break
	# if(f):
	# 	print("YES")

	# n=int(input())
	# l=list(map(int,input().split()))
	# count=[0 for i in range(0,len((l)))]
	# s=set(l)
	# l=[]
	# lis=s
	# for i in range(0,len(set(l))):
	# 	left=0
	# 	store=[]
	# 	for x in range(0,len(l)):
	# 		# for j in range(x+1,len(l)):
	# 		# 	if(lis[i]==l[j]):
	# 		# 		left+=1
	# 		right=0
	# 		for j in range(0,x+1):
	# 			if(lis[i]==l[j]):
	# 				right+=1
	# 		store.append(right)# store.append(min(right,left))
	# 	# count.append(store)
	# 	print(storeg)
	# 	for y in range(0,len(store)):
	# 		count[i][y]=store[y]
	# print(count)

	# n,a,b=map(int,input().split())
	# b=min(a,b)
	# r=(a%b)
	# s=gg[:b]*(a//b) + gg[:r]
	# # print(gg[b:a])
	# ans=""
	# ans=s[:]
	# for i in range(0,n-a):
	# 	ans+=s[i%b]
	# print(ans)
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



# >>> w = dict()
# >>> print(type(w))
# <class 'dict'>
# >>> q = {}
# >>> print(type(q))
# <class 'dict'>
# >>> q = {1,2}
# >>> print(type(q))
# <class 'set'>
# >>> q = {}
# >>> q = {"1":c}
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# NameError: name 'c' is not defined
# >>> q = {"1":2}
# >>> q['1']
# 2
# >>> q['1'] += 1
# >>> q['1']
# 3
# >>> q['2'] = 4
# >>> '2' in q.keys()
# True
# >>> '2' in q.values()
# False
# >>> q.items()
# dict_items([('1', 3), ('2', 4)])
# >>> k, v in q.items()
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# NameError: name 'k' is not defined
# >>> for k, v in q.items():
# ...     print(k, v
# ... )
# ... 
# 1 3
# 2 4
# >>> q.update('2')
