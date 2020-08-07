n, k, v = int(input()), int(input()), []
for i in range(n): v.append(int(input()))
v = sorted(v, reverse=True)
print(k + v[k:].count(v[k-1]))
