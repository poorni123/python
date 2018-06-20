n=int(input())
s=str(input())
l=s.split(" ")
l.sort()
c=0
s1=""
for i in range(len(l)):
	s1=s1+str(l[i])
	if(c<len(l)-1):
		s1=s1+" "
	c+=1
print(s1)
