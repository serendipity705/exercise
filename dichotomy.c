#include <stdio.h>
int dichotomy ( int key, int a[], int length);
void sort ( int a[], int length);

int main(int argc, char** argv) {
	int a[] = {1,3,56,2,8,57,4,12,43,66,98,76,};
	int x = 56;
	int sz = sizeof(a)/sizeof(a[0]);
//	int length = sizeof(a)/sizeof(a[0]);
	sort( a, sz );
	int y = dichotomy( 56, a, sz );
	for( int i = 0; i < sz; i++) {
		printf("%d ",a[i]);
	}
	printf("%d", y);
	return 0;
}
//选择排序
void sort ( int a[], int length) {
	int tmp;
	for( int i = 0; i < length-1; i++) {
		int maxid = i;
		for( int j = i+1; j < length; j++) {
			if( a[maxid] > a[j]) {
				maxid = j;
			}
		}
		tmp = a[maxid];
		a[maxid] = a[i];
		a[i] = tmp;
	}
}
//二分查找
int dichotomy ( int key, int a[], int length) {
	int max,ret = -1;
	int left = 0;
	int rigth = length-1;
	while( rigth >left) {
		max = ( left +rigth) /2;
		if( a[max] == key) {
			ret = max;
			break;
		} else if( a[max] < key) {
			left = max;
		} else if( a[max] > key) {
			rigth = max;
		}
	}
	return ret;
}