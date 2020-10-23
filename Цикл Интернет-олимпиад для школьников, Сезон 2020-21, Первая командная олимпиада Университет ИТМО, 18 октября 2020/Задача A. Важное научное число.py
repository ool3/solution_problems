a, b = list(map(int, input().split()))

if a != b:
    x = 1
    while (a + x) % b != 0 or (b + x) % a != 0:
        x += 1
    print(x)
else:
    print(0)
