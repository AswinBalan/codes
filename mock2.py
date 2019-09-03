import itertools
n,p = input().split(',')
inc =0
temp =''
var = 1
a = map(int,input().rstrip().split(','))
b = itertools.combinations(a,3)
for i in b:
    if var > 10007:
       temp =var%1009
    if sum(i)%int(p) == 0:
         inc += 1
    var +=1
print(inc,temp)
