number_1 = input()
number_2 = input()
string = ''
for i in range(len(number_1)):
    if number_1[i] == number_2[i]:
        string += '0'
    else:
        string += '1'
print(string)
