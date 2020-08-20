n=input()
summ=0;
cnt=0;
l=len(n);
if(l==1):
    print(0)
else:
    m=10
    while(l!=1 and m):
        summ=0;
        for i in n:
            summ+=(ord(i)-ord('0'))
        n=""
        while(summ):
            n+=str(summ%10)
            summ=summ//10
        cnt+=1
        l=len(n)
        # n=n[:-1]
        m-=1
        # print(n)
    print(cnt)