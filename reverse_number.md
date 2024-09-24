set n to input
set sum = 0
while rem != 0
	curr = n
	n = curr//10
	rem = curr%10
	sum = sum*10 + rem
print sum

