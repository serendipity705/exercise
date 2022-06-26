#include <stdio.h>

int main(int argc, char** argv) {
	int sum,summation=0,UpperLimit,LowerLimit;

	scanf("%d %d",&LowerLimit,&UpperLimit);

	
	if(UpperLimit>1&&UpperLimit<500) {
		for(int i=LowerLimit; i<=UpperLimit; i++) {
			switch(i) {
				case 2:
				case 3:
				case 5:
				case 7:
					sum++;
					summation+=i;
					break;
				default:
					if(i%10==1||i%10==3||i%10==7||i%10==9) {
						for(int a=2; a<=i; a++) {
							if(a==i) {
								sum++;
								summation+=i;
							}
							if(i%a==0){
								break;
							}
						}
					}
					break;
			}
		}	
	}
	printf("%d %d",sum,summation);
	return 0;
}