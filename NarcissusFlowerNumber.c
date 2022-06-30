#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main() {
	int m, n;

	scanf("%d %d", &m, &n);
	if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

	return 0;
}

int narcissistic( int number ) {
	int length, a, ret = 0, combine = 0;
	int copy = number;
//	获取数字位数
	for( length = 0; copy>0; length++ ) {
		copy /= 10;
	}
	copy = number;
//	运算
	while( copy > 0 ) {
		a = copy % 10;
		int power = 1;
		for( int g = 0; g < length; g++ ) {
			power *= a;
		}
		combine += power;
		copy /= 10;
	}
	if(combine == number ) {
		ret = 1;
	}
	return ret;
}

void PrintN( int m, int n ){
	for(int i = m+1; i <= n; i++){
		if ( narcissistic(i) ) printf("%d\n", i);
	}
}