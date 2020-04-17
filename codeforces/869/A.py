n = int(input())
x = list(map(int,input().split()))
y = list(map(int,input().split()))
numbers = set(x+y)
count = 0
for i in x:
    for j in y:
        if i^j in numbers:
            count += 1
if (count%2==0):
    print("Karen")
else:
    print("Koyomi")