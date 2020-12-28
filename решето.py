n = int(input())
i = 2
ar = [0] * n
while i * i < n:
    k = i * i
    if ar[i] == 0:
        while k < n:
            ar[k] = 1
            k += i
    i += 1
for i in range(n):
    if ar[i] == 0:
        print(i)
