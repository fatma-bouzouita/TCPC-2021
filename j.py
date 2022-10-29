with open("artwork.in", 'r') as file :
    t = int(file.readline())
    for _ in range(t):
        n = int(file.readline())
        a, b = [], []
        for i in range(n):
            a.append([int(i) for i in file.readline().split(" ")])
        for i in range(n):
            b.append([int(i) for i in file.readline().split(" ")])
        tmp = []
        cpy = a[:]
        ans = False
        for _ in range(4):
            for i in range(n):
                tmp.append(a[:][i][::-1])
                for j in range(n):
                    cpy[i][j] = cpy[i][j] | tmp[i][j]
            print(tmp)
            break
            if cpy == b:
                ans = True
                break
        if ans:
            print("YES")
            continue
        cpy = a[:]
        tmp = []
        for _ in range(4):
            for i in range(n):
                tmp.append(a[:][n-i-1])
                for j in range(n):
                    cpy[i][j] = cpy[i][j] | tmp[i][j]
            if cpy == b:
                ans = True
                break
        if ans:
            print("YES")
        else:
            print("NO")

