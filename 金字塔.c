#include <stdio.h>

void CharPyramid( int n, char ch ){
	int a=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		for(int j=0;j<a;j++){
			printf("%c ",ch);
		}
		printf("\n");
		a+=1;
	}
}

int main(int argc, char** argv) {
	int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
	return 0;
}