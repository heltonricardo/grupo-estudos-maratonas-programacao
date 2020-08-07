n = int(input())
h = n // 3600
n -= h * 3600
m = n // 60
n -= m * 60
print('{}:{}:{}'.format(h, m, n))
