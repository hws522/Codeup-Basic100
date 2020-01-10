tmp = input().split(" ")

a = int(tmp[0])
b = int(tmp[1])

i = 1
j = 1

while i <= a:
    while j <= b:
        print("%d %d" %(i, j))
        j += 1
    i += 1
    j = 1
