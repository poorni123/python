s="jaagangg"
uniqs=""
dup=""
for x in s:
        if not(x in uniqs):
            uniqs = uniqs + x
        else:
        	if not(x in dup):
        		dup=dup+x
print(dup)
