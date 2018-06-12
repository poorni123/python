x=raw_input()
y=raw_input()
differ=0
if(len(x)==len(y)):
	for i in range(0,len(x)):
		if(x[i]!=y[i]):
			differ=differ+1
	if(differ==1):
		print "yes"
	else:
		print "no"
