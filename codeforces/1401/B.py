t=int(input())
for _ in range(t):
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    # if(b[2]>a[0]+a[2]):
    #     print(2*(b[0]-a[0]-a[2]))
    # else:
    c=b[2]-a[0]-max(0, a[2]-b[1])
    if(c>0):
        print(2*min(b[1], a[2])-2*c)
    else:
        print(2*min(b[1], a[2]))