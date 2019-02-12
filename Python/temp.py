import numpy as np
n=int(input())
x = [int(i) for i in input().split()]
y = x[::-1]
z = map(sum, zip(x,y))
print(z)