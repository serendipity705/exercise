#include <stdio.h>

int main(int argc, char** argv) {
	int rabbit,moon=0;
	int a=2,b=0,c=0;

	scanf("%d",&rabbit);
	if(rabbit>1) {
		while(c<2*rabbit) {
			c=a+b;
			a=b;
			b=c;
			moon++;
		}
		printf("%d",moon);
	} else {
		printf("1");
	}
	return 0;
}