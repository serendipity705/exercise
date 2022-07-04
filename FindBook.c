#include <stdio.h>

typedef struct {
	double price;
	char name[31];
} works;

int main() {
	int i,n,max=0,min=0;
	scanf("%d",&n);
	char c;
	works book[n];
	for(i=0; i<n; i++) {
		scanf("%c",&c);
		gets(book[i].name);
		scanf("%lf",&book[i].price);
		if(book[i].price>book[max].price) {
			max=i;
		}
		if(book[i].price<book[min].price) {
			min=i;
		}
	}
	printf("%.2f, %s\n",book[max].price,book[max].name);
	printf("%.2f, %s\n",book[min].price,book[min].name);
	return 0;
}