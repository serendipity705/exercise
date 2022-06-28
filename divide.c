#include <stdio.h>
void divider(int a,int b);

int main(int argc, char** argv) {
	int divide,into;
	
	scanf("%d/%d",&into,&divide);
	divider(into,divide);
	return 0;
}

void divider(int a,int b) {
	int x,fruit;
//	计算小数点前
	printf("%d.",a / b);
	x = a % b * 10;
//	计算小数点后
	for(int i = 0; i < 200; i++) {
		fruit = x / b;
		printf("%d",fruit % 10);
		if(x % b == 0) {
			printf("\n");
			break;
		}
		x = x % b * 10;
	}
}