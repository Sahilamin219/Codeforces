import sys

input=sys.stdin.readline
inf = 1e10
mod = int(1e9 + 7)
t=1;
# t=int(input())
for _ in range(t):
    # n, k= map(int, input().split())
    # v=list(map(int, input().split()))
    s=input()
    c=s.count('1')
    c1, i=0, 0
    while(i<len(s) and s[i]!='2'):
        if(s[i]=='0'):c1+=1
        i+=1
    print('0'*c1, end="")
    print('1'*c, end="")
    while(i<len(s)):
        if(s[i]!='1'):
            print(s[i], end="")
        i+=1