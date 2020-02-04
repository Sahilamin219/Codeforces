t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    if(n%9==0):
        print(n+((n-1)//9))
    else:
        print(n+(n//9))