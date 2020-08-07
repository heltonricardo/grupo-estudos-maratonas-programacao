# Considerando que a entrada seja feita usando ponto (.) para separação das \
# casas decimais, e não vírgula (,), como exemplificado na descrição.

x1, y1 = [float(x) for x in str(input()).split()]
x2, y2 = [float(x) for x in str(input()).split()]
d = ((x2 - x1)**2 + (y2 - y1)**2) ** 0.5
print('{:.4f}'.format(d))
