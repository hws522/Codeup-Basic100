arr = [[0]*19 for i in range(19)]

for i in range(0, 19):
    a = input().split()
    for j in range(0, 19):
        arr[i][j]=int(a[j])

n = int(input())

for i in range(n):
    x, y = input().split()
    x = int(x)
    y = int(y)

    for j in range(19):
        if(arr[x - 1][j] == 1):
            arr[x - 1][j] = 0
        else:
            arr[x - 1][j] = 1    

    for k in range(19):
        if(arr[k][y - 1] == 1):
            arr[k][y - 1] = 0
        else:
            arr[k][y - 1] = 1        

for i in range(19):
    for j in range(19):
        print(arr[i][j], end = ' ')
    print()
