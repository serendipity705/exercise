#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char value[10000] , sum[10000];
	gets(value);
	gets(sum);
	char *p = sum;
	int len=strlen(sum);
	if( strstr( p, value) == NULL) printf("-1");
	while(strstr( p, value) != NULL) {
		p=strstr( p, value);
		printf("%d ", len - strlen(p) );
		p++;
	}
	return 0;
}