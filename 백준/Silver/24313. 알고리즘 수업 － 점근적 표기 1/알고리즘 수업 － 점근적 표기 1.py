import sys
a1, a0 = map(int, sys.stdin.readline().split())
c, n0 = int(sys.stdin.readline()), int(sys.stdin.readline())

if (a1 - c) * n0 + a0 <= 0 and a1 <= c:
    print(1)
else:
    print(0)