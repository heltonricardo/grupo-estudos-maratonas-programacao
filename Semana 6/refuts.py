for a in range(100):
   for b in range(100):
      for c in range(100):
         t = set([b + 2 * c, a + c, 2 * a + b])
         if len(t) == 1:
            print(a, b, c)
            input()
