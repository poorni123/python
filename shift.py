n=int(input())
m=int(input())
l=[]
for i in range(n):
	l.append(int(input()))
for x in range(m):
	x=l[n-1]
	i=len(l)-1
	while(i>=0):
		l[i]=l[i-1]
		i=i-1
	l[0]=x
print(l)
