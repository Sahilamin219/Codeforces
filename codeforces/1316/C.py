n,m,p=map(int,input().split())
ln=[]
ln=list(map(int,input().split()))
lm=[]
lm=list(map(int,input().split()))
a=0
b=0
for i in range(0,len(ln)):
    if(ln[i]%p!=0):
        a=i
        break
for i in range(0,len(lm)):
    if(lm[i]%p!=0):
        b=i
        break
print(a+b)