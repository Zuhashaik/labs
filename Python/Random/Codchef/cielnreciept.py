def hi(i):
 global x,y,n,p
 while(True):
  x=2**(11-i)
  if y==p:
   return n
  if y+x>p:
    i+=1
  else:
    y=y+x
    n+=1
    i+=1
    hi(0)
t=int(input(""))
for x in range(0,t):
 p=int(input(""))
 y=0
 x=0
 n=0
 m=hi(0)
 print(n)