n=int(input())
s = ""
cons = 96

if n%26:
    s+=chr(cons + n%26)
else:
    n-=1
    s+="z"
n = n//26

while n:
    if n%26:
        s+=chr(cons + n%26)
    else:
        n-=1
        s+="z"
    n = n//26
    
print(s[::-1])