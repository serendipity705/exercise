#include <stdio.h>

int main(int argc, char** argv) {
	const int NUMBER=200;
	int by[NUMBER];
	int divide,into,fruit;

	scanf("%d/%d",&into,&divide);
	printf("%d.",into/divide);
	by[0]=into%divide*10;
	for(int i=0; i<NUMBER; i++) {
		fruit=by[i]/divide;
		by[i+1]=by[i]%divide*10;
		printf("%d",fruit%10);
		if(by[i]%divide==0||i==NUMBER) {
			printf("\n");
			break;
		}

	}
	return 0;
}