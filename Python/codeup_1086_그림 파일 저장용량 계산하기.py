h, w, b = input().split()

h = int(h)
w = int(w)
b = int(b)

result = (h * w * b) / 8388608

print("%.2f MB" %result)
