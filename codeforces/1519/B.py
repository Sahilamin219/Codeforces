for i in range(int(input())):
    n, m, k = map(int, input().split())
    print('YES' if k == n*m-1 else 'NO')