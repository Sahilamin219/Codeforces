n,d=map(int,input().split())
l=list(map(int,input().split()))
# n=4
# d=3
# l=[-3,2,9,16]
f=[]
count=0
for i in range (0,n-1):
    f.append(l[i+1]-l[i])
    if(f[i]>2*d):
        count+=2
#         print(f[i])
    elif(f[i]==2*d):
        count+=1
#         print(f[i])
count+=2
print(count)
