mod = pow(10, 9) + 7
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
    if(min(l) == max(l)):
        print("-1")
    else:
        k=max(l)
        f=0;
        for i in range(n-1):
            if( l[i]==k and l[i+1]<k):
                print(i+1)
                f=1;
                break;
        if(f==0):
            for i in range(1,n):
                if( l[i]==k and l[i-1]<k):
                    print(i+1)
                    f=1;
                    break;