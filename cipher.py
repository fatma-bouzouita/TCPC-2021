def getCycle(s):
    i = (s+s).find(s, 1, -1)
    return s if i == -1 else s[:i]

with open("cipher.in", 'r') as file:
    et = file.readline()
    dt = file.readline()
    key = ""
    for i in range(len(et)-1):
        if et[i] == ' ':
            continue
        key += chr(abs(ord(et[i]) - ord(dt[i])) + ord('a'))
    print(getCycle(key))