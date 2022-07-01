#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	while(1) {
		char word[100];
		scanf("%s", &word);
		int length = strlen(word);
		if ( length-1 == '.' ) {
			printf("%d", length-1 );
		} else {
			printf("%d", length );
		}
	}
	return 0;
}