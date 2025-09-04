def func(fr, to, block):
    num = [1, 2, 3]
    num.remove(fr)
    num.remove(to)
    ot = num[0]
    if block != 1:
        func(fr, ot, block-1)
        func(fr, to, 1)
        func(ot, to, block-1)
    else:
        print(fr, to)

N = int(input())
print(2**N-1)
func(1, 3, N)
