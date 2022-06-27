#include <stdio.h>

int main(int argc, char** argv) {
	int rhombus,mask,a=2;
	
	scanf("%d",&rhombus);
	
	if(rhombus%2==0){
		rhombus++;
	}
	mask=rhombus-1;
	
	for(int i=0; i<rhombus; i++) {
		for(int j=0; j<mask; j++) {
			printf(" ");
		}
		for(int g=0; g<rhombus-mask; g++) {
			printf("* ");
		}
		if(mask==0) {
			a=-a;
		}
		mask-=a;
		printf("\n");
	}
	return 0;
}