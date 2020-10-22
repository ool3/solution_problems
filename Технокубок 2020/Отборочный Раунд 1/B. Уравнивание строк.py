for i in range(int(input())):
    string_1 = [i for i in input()]
    string_2 = [i for i in input()]
    f = False
    if len(string_1) == len(string_2):
        for i in string_1:
            if string_1.count(i) > 0 and string_2.count(i) > 0:
                f = True
            else:
                f = False
                print('NO')
                break
    if f:
        print('YES')
