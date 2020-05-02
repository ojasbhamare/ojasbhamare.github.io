text = input('Text: ')
l = 0
w = 0
s = 0

for i in text:
    if i in ['.', '!', '?']:
        s += 1

for i in text:
    if i == (' '):
        w += 1
w += 1

for i in text:
    if ('a' <= i <= 'z') or ('A' <= i <= 'Z'):
        l += 1

ans = round(5.88 * (l / w) - 29.6 * (s / w) - 15.8)

if ans < 1:
    print('Before Grade 1')
elif ans > 16:
    print('Grade 16+')
else:
    print('Grade', ans)