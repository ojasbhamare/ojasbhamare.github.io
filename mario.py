while True:
    n = input('Height: ')
    if n == '':
        continue
    for i in n:
        if n not in range(0, 10):
            pass
    else:
        continue
    n = int(n)
    if 0 < n < 9:
        break

for i in range(n):
    for j in range(n):
        if j >= n - i - 1:
            print('#', end='')
        else:
            print(' ', end='')
    print()

