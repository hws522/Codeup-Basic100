n = int(input())

arr = [[0]*19 for i in range(19)]

for i in range(n):
    x, y = input().split()
    x = int(x)
    y = int(y)

    arr[x - 1][y - 1] = 1

for i in range(19):
    for j in range(19):
        print(arr[i][j], end = " ")
    print()


