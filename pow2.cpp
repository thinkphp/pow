#include <iostream>
#include <fstream>
#define MOD 1999999973
#define FIN "lgput.in"
#define FOUT "lgput.out"
#define LL long long

using namespace std;

LL pow(LL base, LL exp) {

   LL ans = 1;

   while(exp) {

     if(exp & 1) {

   	    ans = (ans * base ) % MOD;  
     }	

     base = (base * base ) % MOD;

     exp >>= 1;
   }

   return ans % MOD;
}

int main(int argc, char const *argv[])
{
	LL a, b;
	ifstream fin(FIN); 
	ofstream fout(FOUT);

	fin>>a>>b;
	fout<<pow(a,b);
	return 0;
}