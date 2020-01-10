a = input()
count = 10000;
num = 0
i = 0

while i < 5:
    num = int(a[i])*count
    
    print("[%d]" %(int(num)))
    
    count /= 10
    i += 1