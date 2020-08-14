from math import ceil
while True:
   a, b = [int(x) for x in input().split()]
   if not a + b: break
   print(ceil(a / 2) * ceil(b / 2))
