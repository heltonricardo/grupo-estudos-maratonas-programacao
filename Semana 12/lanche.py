c, q = [int(x) for x in input().split()]
if c == 1: v = q * 4
elif c == 2: v = q * 4.5
elif c == 3: v = q * 5
elif c == 4: v = q * 2
else: v = q * 1.5
s = f'Total: R $ {v:.2f}'.replace('.', ',')
print(s)
