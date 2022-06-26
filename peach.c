#include <stdio.h>

int main(int argc, char** argv) {
	int day,sum=0,peach=1;
	
	scanf("%d",&day);
	for(int i=1;i<day;i++){
		peach=2*(peach+1);
		sum+=peach;
	}
	printf("%d\n",sum);
	return 0;
}