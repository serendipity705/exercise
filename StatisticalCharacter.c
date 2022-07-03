#include <stdio.h>
#include <string.h>
#define MAXS 15

void StringCount( char *s );

int main() {
	char s[MAXS];
	
	gets(s);
	StringCount(s);
	
	return 0;
}

void StringCount( char *s ) {
	int str[5] = {0};
//	通过ASCII编码大小判断
	for ( int i=0; s[i] != '\0'; i++) {
		if ( s[i] >= 'A' && s[i] <= 'Z' ) str[0]++;
		else if ( s[i] >= 'a' && s[i] <= 'z' ) str[1]++;
		else if ( s[i] == ' ' ) str[2]++;
		else if ( s[i] >= '0' && s[i] <= '9' ) str[3]++;
		else str[4]++;
	}
//	遍历输出
	for ( int i=0; i<5; i++) {
		printf("%d ", str[i]);
	}
}