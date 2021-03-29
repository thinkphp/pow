def const():
	return 1999999973

def pow(base,exp):
	ans = 1
	while exp:
		if exp & 1:
		   ans = ( ans * base ) % const()
		base = (base * base ) % const()
		exp >>= 1
	return ans % const()	
def solve():
    fin = open("lgput.in", "r")
    fout = open("lgput.out", "w")
    data = fin.readline().strip().split(" ")
    data = [int(x) for x in data]
    base = data[0]
    exp = data[1]
    fout.write(str(pow(base, exp)))   
solve()    