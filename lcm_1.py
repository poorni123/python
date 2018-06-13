def lcm(x,y):
	if(x>y):
		max=x
	else:
		max=y
	while(1):
		if(max%x==0 and max%y==0):
			break
		max+=1
	return(max)
m=int(input())
n=int(input())
c=lcm(m,n)
print(c)
