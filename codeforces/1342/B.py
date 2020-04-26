t=int(input())
while(t):
	t-=1
	s=str(input())
	ss=""
	flag=1
	if(len(s)>1):
		for i in range(1,len(s)):
			if(s[i]==s[i-1]):
				continue
			else:
				flag=0
				break
	if(flag):
		print(s)
	elif(len(s)>2):
		for i in range(0,len(s)):
			if(s[0]=='0'):
				ss+="01"
			else:
				ss+="10"
		print(ss)
	else:
		print(s)