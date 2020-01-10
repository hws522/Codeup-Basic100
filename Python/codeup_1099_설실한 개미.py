arr = []

for i in range(10):
    arr.append([])
    for j in range(10):
        arr[i].append(0)

for i in range(10):
    num = input().split()
    for j in range(10):
        arr[i][j] = int(num[j])

a = 1
b = 1

for i in range(15):
    if arr[a][b] == 0:
        arr[a][b] = 9
        b += 1

    elif arr[a][b] == 1:
        a += 1
        b -= 1

        if arr[a][b] == 2:
            arr[a][b] = 9
            break

        arr[a][b] = 9
        b += 1

    elif arr[a][b] == 2:
        arr[a][b] = 9
        break

for i in range(10):
    for j in range(10):
        print(arr[i][j], end =' ')
    print()    

