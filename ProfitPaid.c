#include <stdio.h>
int isPrime(int x, int KnownPrime[], int nuberOfKnownPrime);
void ProfitPaid(int p[], int len);

int main(int argc, char** argv) {
	int prime[100000];
	prime[0]=2;
	int sumber;
	scanf("%d",&sumber);

	int i = 3, count = 1;
	while ( i < sumber ) {
		if ( isPrime(i, prime, count) ) {
			prime[count++] = i;
		}
		i++;
	}
	
	ProfitPaid( prime, count );
	return 0;
}
//与已有素数相除 判断是否为素数
int isPrime(int x, int KnownPrime[], int nuberOfKnownPrime) {
	int ret = 1;
	int i;
	for ( i=0; i<nuberOfKnownPrime; i++) {
		if( x % KnownPrime[i] ==0) {
			ret = 0;
			break;
		}
	}
	return ret;
}
//输出不超过sumber的满足猜想的素数对的个数
void ProfitPaid(int p[], int len) {
	int sum = 0;
	for( int i=0; i<len; i++ ) {
		if( p[i+1] - p[i] == 2 )	sum++;
	}
	printf("%d", sum);
}