n = int(input())
tmp = input().split()

arr = []

for i in range(0, 23):
    arr.append(0)

for i in range(0, n):
    a = int(tmp[i])
    arr[a - 1] += 1    

for i in range(0, 23):
    print(arr[i], end = " ")
