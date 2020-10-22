from math import gcd
 
number = int(input())
if number == 2:
    print('NO')
elif number > 0 and number % 2 == 0 and number // gcd(number // 2, number) % 2 == 0:
    print('YES')
else:
    print('NO')
