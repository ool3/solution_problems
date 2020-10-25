number = int(input())
first_set = set(map(int, input().split()))
second_set = set(map(int, input().split()))
first_set.update(second_set)
if len(first_set) >= number and list(first_set)[-1] == number and number % 3 != 0:
    print('I become the guy.')
else:
    print('Oh, my keyboard!')
