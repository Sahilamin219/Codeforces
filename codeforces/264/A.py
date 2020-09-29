
def sp(): return map(int, input().split())
def sli(): return list(sp())
t=1
for _ in range(t):
    s=input()
    n=len(s) ;
    sl=[]
    sr=[]
    for i in range(n):
        if s[i]=='l':sl.append(i+1)
        else:sr.append(i+1)
    print(*(sr + sl[::-1]))
    # nw  = (struct dll*)malloc(sizeof(struct dll));
    