hz, bit, st, sec = input().split()

hz = int(hz)
bit = int(bit)
st = int(st)
sec = int(sec)

result = (hz * bit * st * sec) / 8388608

print("%.1f MB" %result)
