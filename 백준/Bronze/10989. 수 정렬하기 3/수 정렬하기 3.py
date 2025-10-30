import sys
m = [0] * 10001
N = int(sys.stdin.readline())
for _ in range(N):
    m[int(sys.stdin.readline())] += 1

for i in range(1, 10001):
    if m[i] > 0:
        for _ in range(m[i]):
            print(i)