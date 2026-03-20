# cook your dish here
T = int(input())
for _ in range(T):
    A, B, X = map(int, input().split())
    sq = X * X
    if A * B <= sq:
        print(0)
    elif min(A, B) <= sq:
        print(1)
    else:
        print(2)
