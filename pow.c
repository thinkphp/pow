#include <stdio.h>
#define MOD 1999999973
#define FIN "lgput.in"
#define FOUT "lgput.out"
#define LL long long

LL _pow(LL base, LL exp) {

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
	LL a, b, result;
	freopen(FIN, "r", stdin);
        freopen(FOUT, "w", stdout);

        scanf("%lld %lld", &a, &b);
        
        result = _pow(a,b);
	
        printf("%lld", result);
	return 0;
}
