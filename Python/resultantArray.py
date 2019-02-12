o=int(input())
m = [int(i) for i in input().split()]
n = m[::-1]
a = [x + y for x, y in zip(m,n)]
print(*a, sep=' ')