n = list(input())
l = len(n)
x = 1
y = 0
z = 0
mod = pow(10, 9) + 7
ans = 0
for i in range(l):
    m = int(n[l - i - 1])
    ans += x * m * ((l - i) * (l - i - 1) // 2)
    ans %= mod
    ans += z * m
    ans %= mod
    y += 1
    z += x * y
    z %= mod
    x *= 10
    x %= mod
print(ans)