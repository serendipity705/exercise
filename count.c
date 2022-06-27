#include <stdio.h>

int main(int argc, char** argv) {
	const int NUMBER=10;
	int count[NUMBER];
	int a,i;
//	初始化count
	for(i=0; i<NUMBER; i++) {
		count[i]=0;
	}
//	输入并保存在数组中
	scanf("%d",&a);
	while(a!=-1) {
		if(a>0&&a<NUMBER) {
			count[a]++;
		}
		scanf("%d",&a);
	}
//遍历输出
	for(i=1; i<NUMBER; i++) {
		printf("%d: %d\n",i,count[i]);
	}
	return 0;
}