import sys
N = int(sys.stdin.readline())
X = list(map(int, sys.stdin.readline().split()))
info = {v: i for i, v in enumerate(list(sorted(set(X))))}
for x in X:
    print(info[x], end = ' ')