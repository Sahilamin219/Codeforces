t=1
# liaison
for _ in range(t):
    n=int(input())
    l="ab";c=0
    for i in range(n):
        if(n==1):print("a");break;
        if(c==n):break;
        if(c+2<=n):print(2*(l[i%2]),end="");c+=2
        else:print(l[i%2],end="");break;