t=int(input())
while t:
    t-=1
    n=int(input())
    # s=set(input())
    # print(*s)
    l=list(map(int,input().split()))
    b=[0]*n
    for i in range(n):
        b[i]=(i+1)
    # print(*l)
    for i in range(2*n):
        if(b[l[i]-1]):
            print(l[i], end=" ")
            b[l[i]-1]=0
    print()