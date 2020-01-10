a, b, c = input().split()

a = int(a)
b = int(b)
c = int(c)

day = 1
i = 0
while i < 1:
    if(day % a == 0 and day % b == 0 and day % c == 0):
        break
    day += 1
    
print(day)
