import sys
T = int(sys.stdin.readline())
for _ in range(T):
    M, Q = sys.stdin.readline().split()
    word = sys.stdin.readline().split()
    if Q == "C": # 알파벳 -> 숫자 49: 1, 65: A
        for i in word:
            print(int(ord(i) - 64), end = " ")
    elif Q == "N": # 숫자 -> 알파벳
        for i in word:
            print(chr(int(i) + 64), end = " ")
    print()