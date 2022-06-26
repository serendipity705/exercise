#include <stdio.h>

int main(int argc, char** argv) {
	int n;
	double sum=1,price=1;

	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		sum=1;
		for(int a=1; a<=i; a++) {
			sum*=a;
		}
		price=price+1/sum;
	}
	printf("%.8lf",price);
	return 0;
}