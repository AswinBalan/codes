import math
test = int(input())

mod = 1000000007

a, b,k = map(int, input().split(' '))
while test:
    comb = math.factorial(a)//(math.factorial(k)*math.factorial(a-k))
    print((comb*(1+b))%mod)
    test = test -1



