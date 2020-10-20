def sp(): return map(int, input().split())
def lit(): return list(sp())
def fun(x):
    return sum(int(i) for i in str(x))
def find(n):
    if(n==3):return 3
    while(1):
        flag=0
        for i in range(2,int(sqrt(n))+1):
            if(n%i==0):
                n+=1
                break;
            if(i==int(sqrt(n))):flag=1;break;
        if(flag):break;
    return n;
    # print(i+1, i+((n+1)//2)+1)
t=int(input())
# t=1
# liaison
for _ in range(t):
    n=int(input())
    l=lit()
    if(l.count(1)==0 or l.count(1)==1):
        print(0)
    else:
        ans=0;
        got=0;
        for i in range(n):
            if(l[i]==1):
                got=1;
            if(l[i]==0 and got==1):
                ans+=1;
        i=n-1;
        while(l[i]==0):
            i-=1;
            ans-=1;
        print(ans)