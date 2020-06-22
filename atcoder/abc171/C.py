N = int(input())
ans = []
while N:
    N -= 1
    N, r = divmod(N, 26)
    ans.append(chr(ord('a') + r))
print("".join(reversed(ans)))