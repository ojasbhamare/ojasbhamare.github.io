while True:
    n = input('Height: ')
    if n == '':
        continue
    z = 'int'
    for i in n:
        if i not in ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0'] :
            z = 'notint'
    if z == 'notint':
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

