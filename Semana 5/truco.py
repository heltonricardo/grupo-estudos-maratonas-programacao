b = [x for x in range(4, 14)] + [x for x in range(1, 4)]
b = b[b.index(int(input())) + 1:]
print(*b if len(b) else '0')
