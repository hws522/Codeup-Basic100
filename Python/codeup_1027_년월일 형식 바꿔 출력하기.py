a = input().split(".")
b = 0

while b < 3:
    a[b] = int(a[b])
    b += 1

print("%02d-%02d-%04d" %(a[2], a[1], a[0]))