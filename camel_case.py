a="poornima kumar"
s=a.split(" ")
l=len(s)
for i in range(0,l):
	s[i]=s[i].capitalize()
c=s[0]
g=" "
for i in range(1,l):
	c=c+g+s[i]
print(c)
