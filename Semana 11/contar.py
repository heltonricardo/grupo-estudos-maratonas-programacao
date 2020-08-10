for g in range(int(input())):
   v = c = 0
   for i in input():
      if 'a' <= i <= 'z':
         if not i in 'aeiou': c += 1
         else: v += 1
   print(v, c)
