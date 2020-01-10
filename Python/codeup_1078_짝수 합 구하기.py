a = int(input())

sum = 0
count = 0

while count < a:
    count += 1

    if(count % 2 == 1):
        continue

    sum = sum + count
   

print(sum)
