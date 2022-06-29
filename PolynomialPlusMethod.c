#include <stdio.h>

int main(int argc, char** argv) {
	int Power, modulus,counter = 0;
	scanf("%d %d", &Power, &modulus);
//	保存最大值
	const int NUMBER = Power+1;
	int Array[NUMBER];
//	memset(Array, 0, Power);
//初始化
	for(int i=0; i<=NUMBER; i++) {
		Array[i]=0;
	}
//输入
	while( counter<2) {
		Array[Power] += modulus;
		scanf("%d %d", &Power, &modulus);
		if( Power == 0) {
			counter++;
			if( counter == 2) {
				Array[Power] += modulus;
			}
		}
	}
//输出
	for( int j=NUMBER-1; j>1; j--) {
		if(Array[j] != 0) {
			printf("%dx%d", Array[j],j );
			if( Array[j] > 0) {
				printf("+");
			}
		}
	}
	printf("%dx", Array[1]);
	if( Array[0] > 0) {
		printf("+");
	}
	printf("%d\n", Array[0]);
	return 0;
}