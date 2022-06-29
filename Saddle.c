#include <stdio.h>

int main(int argc, char** argv) {
	int n,point;
//	创建二维数组并输入
	scanf("%d", &n);
	int Saddle[n][n];
	for( int i=0; i<n; i++) {
		for( int j=0; j<n; j++) {
			scanf("%d", &point);
			Saddle[i][j] = point;
		}
	}
//运算
	int count,x,y;
	for( int i=0; i<n; i++) {
		int max = 0;
//		行最大值
		for( int j=0; j<n; j++) {
			if( Saddle[i][j] > max) {
				max = Saddle[i][j];
				x = i;
				y = j;
			}
		}
		count = 0;
//		列最大值
		for( int a=0; a<n; a++) {
			if( Saddle[a][y] < max) {
				break;
			}
			count++;
		}
		if(count == n) {
			break;
		}
	}
//	输出
	if(count == n) {
		printf("%d %d",x,y);
	}else{
		printf("NO");
	}
	return 0;
}