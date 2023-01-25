n = int(input())

k = list(map(int, input().split()))

r = int(input())
cond = []
for i in range(r):
    cond.append(list(map(int, input().split())))

cond.sort(key=lambda x: x[1])

i = 0
total = 0
while i < n:
    for j in cond:

        if j[0] >= k[i]:
            total = total + j[1]
            break
    i = i + 1
print(total)
