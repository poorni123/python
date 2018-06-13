n=int(input())
l=[]
for i in range (2,n):
	c=0
	for j in range (1,i+1):
		if (i%j==0):
			c=c+1
		else :
			pass
	if(c==2):
		l.append(i)
c=0
s=""
l1=[i for i in l if(n%i==0)]
for i in range(0,len(l1)):
	s=s+str(l1[i])
	if(c<len(l1)-1):
		s=s+" "
	c=c+1
print(s)
