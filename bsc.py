T = int(input())
for _ in range(T):
    N, X, Y = map(int, input().split())
    S = input().strip()
    
    c0 = S.count('0')
    c1 = S.count('1')
    
    if c0 == 0 or c1 == 0:
        print(0)
    else:
        print(min(X, Y))
