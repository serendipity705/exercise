#include <stdio.h>
#include <string.h>
#define MAXS 10

void Shift( char s[] );

int main() {
	char s[] = "abcdefg";

	Shift(s);
	printf("%s\n", s);

	return 0;
}
//方法一
//	void Shift( char s[] ) {
//	char a[MAXS];
//	for ( int i=0; i<3; i++) {
//		a[i] = s[i];
//	}
//	int j,i=0;
//	for ( j=0; j<strlen(s)-3; j++) {
//		s[j] = s[j+3];
//	}
//	for ( ; j<strlen(s); j++) {
//		s[j] = a[i++];
//	}
//}

//方法二
void Shift( char s[] ) {
	char x[MAXS], y[MAXS];
	strcpy(x, s);
	x[3]='\0';
	strcpy(y, s + 3);
	strcat(y,x);
	strcpy(s,y);
}