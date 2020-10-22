for i in range(int(input())):
    number = int(input())
    counter = 0
    if number == 2:
        print(2)
    elif number % 2 == 0:
        print(0)
    else:
        while number % 2 != 0:
            number += 1
            counter += 1
        print(counter)
