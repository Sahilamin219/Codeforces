n=int(input())
l=list(map(int,input().split()))
count=0
for i in l:
    if(i%2==1):
        count+=1
print(min(count,n-count))