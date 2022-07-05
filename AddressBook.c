#include <stdio.h>

typedef struct {
	int Birthday;
	char name[10];
	char number[20];
} Address;

int main(int argc, char** argv) {
	Address p[10];
	int len;
	scanf( "%d", &len );
//	输入
	for( int i=0; i<len; i++ ) {
		scanf( "%s %d %s", p[i].name, &p[i].Birthday, p[i].number );
	}
//	排序
	for( int i=0; i<len-1; i++ ) {
		for( int j=i+1; j<len; j++ ) {
			Address temp;
			if ( p[i].Birthday > p[j].Birthday ) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
//	输出好看一点 :)
	printf("\n");
	for( int i=0; i<len; i++ ) {
		printf( "%s %d %s\n", p[i].name, p[i].Birthday, p[i].number );
	}
	
	return 0;
}