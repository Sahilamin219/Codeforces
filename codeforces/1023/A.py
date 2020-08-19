n,m=map(int, input().split())
s=input()
t=input()
pos=s.find('*')
# pos=s.index('*')
# print(pos, end=" ")
if(pos==-1):
    if s==t : print("YES")
    else: print("NO")
else:
    # print(s[:pos])
    # print(t[:pos])
    # print(s[pos+1:])
    # print(m-n-pos-1, t[m-(n-pos-1):])
    # m-(n-pos)+1>pos and 
    if(s[:pos]==t[:pos] and s[pos+1:]==t[m-(n-pos)+1:] and n<=m+1):print("YES")
    else:print("NO")