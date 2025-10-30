import sys
N = int(sys.stdin.readline())
group = N
for _ in range(N):
    m = {}
    word = sys.stdin.readline()
    m[word[0]] = 1
    curr = word[0]
    for t in word[1:]:
        if t != curr:
            curr = t
            if t in m:
                N -= 1
                break
            else:
                m[t] = 1
print(N)