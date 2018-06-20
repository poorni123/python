s=str(input())
l=[]
l=s.split()
a=[]
for i in range(0,len(l)):
 a.append(l[i].capitalize())
print(a)
g=""
v=0
for i in range(0,len(l)):
	g=g+a[i]
	if(v<len(a)-1):
		g=g+" "
		v+=1
print(g)
