#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int length;
	double* a;
	double max, min, average=0;
//	创建动态内存分布
	scanf("%d", &length );
	a = (double*) malloc( length*sizeof(double) );
//	主体
	for ( int i=0; i<length; i++ ) {
		scanf("%lf", &a[i] );
		average += a[i];
		if (i == 0) max = min = a[i];
		if ( a[i] > max ) max = a[i];
		if ( a[i] < min ) min = a[i];
	}
//	欠着人家不好，赶紧还了先 :)
	free(a);
//	打印结果
	printf("average = %.2f\n", average/length);
	printf("max = %.2f\n", max);
	printf("min = %.2f\n", min);
	return 0;
}