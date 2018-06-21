ef HCF(x, y):
	c=1
	if(x>y):
		s=x
	else:
		s=y
	while(c<=s):
	       if(x%c==0 and y%c==0):
	           print(c)
	       c+=1
num1 = int(input())
num2 = int(input())
HCF(num1, num2)
