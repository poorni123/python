s=str(input())
l=" "
l=s.split()
print(l)
for i in range(0,len(l)):
 a=l[i].capitalize()
 c=[]
 g=" "
for i in range(0,len(l)):
	c=l[i]+g+l[i+1]
	print(c)
