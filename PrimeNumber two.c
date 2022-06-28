#include <stdio.h>
int isPrime(int x, int KnownPrime[], int nuberOfKnownPrime);

int main(int argc, char** argv) {
	const int NUMBER = 100;
	int prime[NUMBER];
	prime[0]=2;
	int count = 1;
	int i = 3;
	while ( count < NUMBER ) {
		if ( isPrime(i, prime, count) ) {
			prime[count++] = i;
		}
		i++;
	}
	for( i=0; i<NUMBER; i++) {
		printf("%d",prime[i]);
		if( (i+1)%5 ) printf("\t");
		else printf("\n");
	}
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