#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char str[5][80];
	for ( int i=0; i<5; i++) {
		scanf("%s",&str[i]);
	}
	for ( int i=0; i<4; i++) {
		for ( int j=i+1; j<5; j++) {
			if ( strcmp(str[i],str[j]) > 0 ) {
				char temp[81];
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	for ( int i=0; i<5; i++) {
		printf("%s\n",str[i]);
	}
	return 0;
}