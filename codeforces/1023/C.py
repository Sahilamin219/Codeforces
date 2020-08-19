n,m=map(int, input().split())
s=input()
# pos=s.find('*')
# pos=s.index('*')
dif=n-m
stack=[]
for i in range(len(s)):
    if(s[i]=='('):
        stack.append(s[i])
    else:
        if(dif):
            stack.pop()
            dif-=2
        else:
            stack.append(s[i])
# print(*stack)
for i in stack:
    print(i, end="")
