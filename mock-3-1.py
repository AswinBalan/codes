a=[]
b=[]
inc = 0
n = int(input())
a=map(int,input().split(','))
for i in list(a):
          add = 0
          while i > 0:
               add += i % 6
               i = i//6
          b.append(add)

for i in range(0,len(b)-1):
     for j in range(i+1,len(b)):
          if b[i] > b[j]:
               inc +=1
               
print(inc)
