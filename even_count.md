#approach-1
set n to input 
print n//2 (int division of n)

#approach-2
set n to input
set count = 0
for i=1 to n step 1 do 
	if i%2==0:
		count = count + 1
print count 
