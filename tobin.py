import sys
def toBin(n):
	size = 16
	for i in reversed(range(0, size)):
		print((n>>i)&1,end='')

def main():
    n = int(sys.argv[1])
    
    for i in range(1,20):
    	toBin(i)
    	print()
main()    