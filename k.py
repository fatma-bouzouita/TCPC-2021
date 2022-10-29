with open("pair.in", 'r') as file:
    t = int(file.readline())
    for _ in range(t):
        A = int(file.readline())
        K = int(file.readline())
        if A % K == 0:
            print("YES")
        else:
            print("NO")
            