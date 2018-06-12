
try:
	count=0
	n=int(raw_input())
	m=int(raw_input())
	for i in range (n,m):
		c=0
		for j in range (n,m):
			if (i%j==0):
				c=c+1
			else :
				pass
		if(c==2):
			count=count+1
	print count
except:
	print "Invalid"
