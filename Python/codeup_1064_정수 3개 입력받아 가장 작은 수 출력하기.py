tmp = input().split(" ")
a = int(tmp[0])
b = int(tmp[1])
c = int(tmp[2])

print((a if a < b else b) if (a if a < b else b) < c else c )
