def pow(a,b):
	ans = 1
	while b:
	   if b & 1:
	      ans *= a
	   a *= a
	   b >>= 1
	return ans   

def main():	
    print(pow(2,10))	
main()    