	input n
(1)	set reverse = 0
(2)	while n != 0:
		(a) rem = n%10
		(b) reverse = reverse*10 + rem
		(c) n = n//10
(3)	output reverse
	end