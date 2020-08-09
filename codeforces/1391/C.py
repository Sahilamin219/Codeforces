def modFact(n, p): 
    result = 1
    for i in range(1, n + 1): 
        result = (result * i) % p  
  
    return result 
mod=1000000007
n=int(input())
m=modFact(n,1000000007)
m -= 2**(n-1)%mod
print(m%mod)