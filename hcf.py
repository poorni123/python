# your code goes here
def HCF(x, y):
	c=1
	k=0
	if(x>y):
		s=x
	else:
		s=y
	while(c<=s):
	       if(x%c==0 and y%c==0):
	       	k=c
	       c+=1
	print(k)
s=str(input())
l=s.split(" ")
num1 = int(l[0])
num2 = int(l[1])
HCF(num1, num2)
