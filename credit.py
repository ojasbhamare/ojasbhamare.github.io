"""
american express:34 || 37 (15)
master card:51-55 (16)
visa : 4   (13-16)
"""
# AMEX\n or MASTERCARD\n or VISA\n or INVALID\n
from sys import exit

cre = input('Number: ')
sum = 0
for i in range(len(cre)):
    if i % 2 == 0:
        sum += int(cre[len(cre) - i - 1])
    else:
        s = int(cre[len(cre) - i - 1]) * 2
        if s < 10:
            sum += s
        else:
            sum += s - 9

if sum % 10 != 0:
    print('INVALID')
    exit(0)

if len(cre) == 15 and cre[0] == '3' and cre[1] in ['4', '7']:
    print('AMEX')
    exit(0)

if len(cre) == 16 and cre[0] == '5' and cre[1] in ['1', '2', '3', '4', '5']:
    print('MASTERCARD')
    exit(0)

if len(cre) in range(13, 17) and cre[0] == '4':
    print('VISA')
    exit(0)

print('INVALID')