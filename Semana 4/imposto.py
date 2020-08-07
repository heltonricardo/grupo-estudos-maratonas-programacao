s, d, p = [int(x) for x in input().split()]

if s < 3000: e = 0
elif s < 5000: e = .05
elif s < 10000: e = .1
elif s < 15000: e = .15
elif s < 20000: e = .2
elif s < 25000: e = .25
elif s < 30000: e = .3
else: e = .35

if e == 0: print('Isento')
else:
   i = 13 * s * e
   
   pp15 = i * 0.15
   pp = p if p <= pp15 else pp15
   
   d = 3 if d > 2 else d
   i = i * (1 - d * 0.1)
   
   i -= pp
   
   print(int(i))
