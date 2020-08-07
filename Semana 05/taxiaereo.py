p, v, d, c = [float(x) for x in input().split()]

s = v + d * p
y = s / d / 2
r = s * y -d * (y ** 2)

print('Passageiros:', int(y))
print('Receita maxima: {:.2f}'.format(r))
