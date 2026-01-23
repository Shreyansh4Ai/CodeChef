def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    T = int(data[0])
    idx = 1
    results = []
    
    for _ in range(T):
        N = int(data[idx]); idx += 1
        A = list(map(int, data[idx:idx+N])); idx += N
        
        max_sum = A[0] + A[-1]  # circular pair
        for i in range(N-1):
            max_sum = max(max_sum, A[i] + A[i+1])
        
        results.append(max_sum)
    
    print("\n".join(map(str, results)))
