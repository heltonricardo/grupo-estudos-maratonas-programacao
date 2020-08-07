L = int(input())
a, g = [int(x) for x in input().split()]
pa, pg = [float(x) for x in input().split()]
pa = L / (a / pa)
pg = L / (g / pg)
print(f'{pa:.2f}')
print(f'{pg:.2f}')
if pa < pg: print('Alcool')
elif pa > pg: print('Gasolina')
else: print('Indiferente')
