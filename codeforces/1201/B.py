n=int(input())
l=list(map(int,input().split()))
l.sort()
if(sum(l)%2==0 and l[n-1]<=(sum(l)-l[n-1])):
    print("YES")
else:
    print("NO")
    