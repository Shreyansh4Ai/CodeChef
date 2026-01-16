t = int(input())

for _ in range(t):
    n = input().strip()
    if n == n[::-1]:
        print("wins")
    else:
        print("loses")
