num = input()

h = int(num, 16)

a = []

i = 1
j = 1
while i < 16:
    a.append(format((h * i), 'x'))
    i += 1

for k in a:
    print("%s*%s=%s" %(num, format(j, 'x').upper(), k.upper()))
    j += 1




