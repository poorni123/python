for num in range(100,200):
    c=0
    for i in range(1,200+1):
        if (num%i==0):
            c=c+1
    if(c==2):
 	print num
