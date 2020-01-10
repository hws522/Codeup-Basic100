a, b ,c = input().split()

r = int(a)
g = int(b)
b = int(c)

count = 0

for i in range(r):
    for j in range(g):
        for k in range(b):
            count += 1
            print(i, j, k)

print(count)
