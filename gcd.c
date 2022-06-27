#include <stdio.h>

int main(int argc, char** argv) {
	int a,b,t;
	
	scanf("%d %d",&a,&b);
	
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	
	printf("%d\n",a);
	return 0;
}