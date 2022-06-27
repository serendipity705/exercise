#include <stdio.h>

int main(int argc, char** argv) {
	int input,a,mask=1;

	scanf("%d",&input);

	if(input<0) {
		input=-input;
		printf("fu ");
	}
	int t=input;

	while(t>9) {
		mask*=10;
		t/=10;
	}
	while(mask>0) {
		a=input/mask;
		input%=mask;
		mask/=10;
//		printf("%d",a);
		switch(a) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if(mask>0) {
			printf(" ");
		}else{
			printf("\n");
		}
	}
	return 0;
}