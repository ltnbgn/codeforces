n, m, a = map(int, input().split())
count_first = int(n / a)
count_second = int(m / a)

if (n / a != count_first):
	count_first+=1

if (m / a != count_second):
	count_second+=1

print(int(count_first * count_second))
