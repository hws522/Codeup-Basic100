w, h = input().split()
w = int(w)
h = int(h)

arr = [[0]*h for i in range(w)]

n = int(input())

for i in range(0, n):
    l, d, x, y = input().split()
    l = int(l)
    d = int(d)
    x = int(x)
    y = int(y)

    for j in range(0, l):
        if d == 0:
            arr[x - 1][y - 1] = 1;
            y += 1
        else:
            arr[x - 1][y - 1] = 1;
            x += 1

for i in range(w):
    for j in range(h):
        print(arr[i][j], end = ' ')
    print()

''' 파이썬 리스트 초기화 
m=[]
for i in range(20) :
    m.append([])
    for j in range(20) :
        m[i].append(0)
'''
