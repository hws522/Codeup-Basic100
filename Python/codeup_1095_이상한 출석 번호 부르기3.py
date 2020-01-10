n = int(input())
tmp = input().split()
a = []


for i in range(n):
    a.append(int(tmp[i]))

a = min(a)
print(a)
