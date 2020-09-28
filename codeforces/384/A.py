N = int(input())
print((N**2+1)//2)
for i in range(N):
    print (''.join(['C' if not (i+j)%2 else '.' for j in range(N)]))
