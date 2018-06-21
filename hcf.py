def HCF(x, y):
	c=1
	if(x>y):
		s=x
	else:
		s=y
	while(c<=s):
	       if(x%c==0 and y%c==0):
	           print(c)
	       c+=1
s=str(input())
l=s.split(" ")
num1 = int(l[0])
num2 = int(l[1])
HCF(num1, num2)
