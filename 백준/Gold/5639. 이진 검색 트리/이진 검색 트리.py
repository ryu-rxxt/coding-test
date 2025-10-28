import sys

sys.setrecursionlimit(10**5)    
pre = list(map(int, sys.stdin.read().split()))

def post(start, end):
    if start >= end:
        return
    root = pre[start]
    mid = end
    for i in range(start + 1, end):
        if pre[i] > root:
            mid = i
            break
    post(start + 1, mid)
    post(mid, end)
    print(root)
    
post(0, len(pre))