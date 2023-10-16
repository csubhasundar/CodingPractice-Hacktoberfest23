n=int(input("enter the no of input"))
b=[]
w=[]
r=[]
s=int(input("enter the total weight"))
v=0
for i in range (0,n):
  a=int(input("enter the benefict"))
  d=int(input("enter the weight"))
  b.append(a)
  w.append(d)
  r.append(a/d)
for i in range (0,n):
  for j in range(i,n):
    if r[i]<r[j]:
      r[i],r[j]=r[j],r[i]
      w[i],w[j]=w[j],w[i]
      b[i],b[j]=b[j],b[i]
print("sorted weight is",w)
print("sorted benefict is",b)
print("sorted benefict/weight is",r)
for i in range (0,n):
  if w[i]<=s:
    s=s-w[i]
    v=v+b[i]
  else:
    v=v+(r[i]*s)
    s=0
print("\ntotal value is:",v)
