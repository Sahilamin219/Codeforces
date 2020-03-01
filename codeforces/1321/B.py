from collections import defaultdict as dd
# from collections import Counter as ccd
# from itertools import  permutations as pp
# from itertools import combinations as cc
# from random import randint as rd
# from bisect import bisect_left as bl
# from bisect import bisect_right as br
# import heapq as hq
# from math import gcd
mod=pow(10,9) +7
def inp(flag=0):
    if flag==0:
        return list(map(int,input().strip().split(' ')))
    else:
        return int(input())
 
# Code credits
# assert(debug()==true)
# for _ in range(int(input())):
 
# t=inp(1)
# while t:
#     t-=1
d=dd(list)
n=inp(1)
l=inp()
for i in range(n):
    x=l[i]-i
    d[x].append(l[i])
ans = 0
for k in d:
    ans=max(ans,sum(d[k]))
print(ans)