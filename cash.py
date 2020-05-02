# 25 10 5 1
while True:
    try:
        change = float(input('Change owed:'))
    except:
        continue
    if change >= 0:
        break
ans = 0
for i in [0.25, 0.10, 0.05, 0.01]:
    while change//i > 0:
        change -= i
        change = round(change, 2)
        ans += 1
print(ans)
