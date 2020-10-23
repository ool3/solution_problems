hours, minutes, seconds = 0, 0, 0

for i in range(int(input())):
    minutes_input, seconds_input = list(map(int, input().split(':')))
    seconds += seconds_input
    while seconds >= 60:
        minutes += 1
        seconds -= 60
    minutes += minutes_input
    while minutes >= 60:
        hours += 1
        minutes -= 60
print('{}:{}:{}'.format(hours, minutes, seconds))
