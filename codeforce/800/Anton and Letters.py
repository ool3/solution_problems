set_letters = set(input().replace('}', '').replace('{', '').split(', '))
if list(set_letters)[0] != '':
    print(len(set_letters))
else:
    print(0)
