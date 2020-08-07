n = int(input())
v = []
for i in range(n): v.append(int(input()))
s = sorted(set(v))
for i in s: print(f'{i} aparece {v.count(i)} vez (es)')
