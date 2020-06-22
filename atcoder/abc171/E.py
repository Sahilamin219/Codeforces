#Take xor of all elements in the input, 
#try to extract the value in each position from that.
N = int(input())
A = list(map(int, input().split()))
S = 0
for x in A:
    S ^= x
for i in range(len(A)):
    A[i] ^= S
print(*A)