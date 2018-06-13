n=int(input())
a=str(input())
b=""
c=n
for j in range(0,c):
	if(a[j]=="a" or a[j]=="e" or a[j]=="i" or a[j]=="o" or a[j]=="u"):
		pass
	else:
		b=b+a[j]

s=b[::-1]
print(s)
