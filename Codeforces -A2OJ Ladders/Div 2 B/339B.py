# I write these codes in steel, for anything not set in metal cannot be trusted

n, m = map(int, input().split())

tasks = map(lambda x: int(x) - 1, input().split())

time = 0
p = 0

for task in tasks:
    if task > p:
        time += task - p

    elif task < p:
        time += n - p + task

    p = task

print(time)
