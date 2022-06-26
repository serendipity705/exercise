#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
	int price=0,count,ret;
	srand(time(0));
	int bill = rand();
	
	printf("%d\n",bill);
	while(bill!=0){
		count=bill%10;
		printf("%d\n",count);
		ret=ret*10+count;
		bill/=10;
	}
	printf("%d",ret);
	return 0;
}