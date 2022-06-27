N = int(input())
scores = []
health = []
count = 0

scores = list(map(int, input().strip().split()))
health = list(map(int, input().strip().split()))

for score in scores:
    if health[0] % score == 0 and health[1] % score == 0:
        count += 1

print(count)
