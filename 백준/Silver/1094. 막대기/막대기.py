import sys

X = int(sys.stdin.readline())
stick = [64]

while(1):
    if sum(stick) == X:
        print(len(stick))
        break
    else:
        half = stick[stick.index(min(stick))] // 2
        if sum(stick) - half >=  X:
            stick[stick.index(min(stick))] //= 2
        else:
            stick[stick.index(min(stick))] = half
            stick.append(half)
