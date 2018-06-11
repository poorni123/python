# your code goes here
# your code goes here
a=str(input())
b=str(input())
c=0
d=0
if(len(a)==len(b)):
 for i in range(1,len(a)):
  if(a[i]==a[i+1]):
   c=c+1
  if(b[i]==b[i+1]):
   d=d+1
  if(c!=b):
   print("no")
   break
 if(c==d):
  print("yes")
 else:
  print("no")
