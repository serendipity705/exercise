#include <stdio.h>

int main(int argc, char** argv) {
	int N, M;
	scanf( "%d %d", &N, &M );
	int s[N];
	int len = N-1;
	
	for( int i=M; i<N; i++ ) {
		scanf( "%d", &s[i] );
	}
	
	for( int i=0; i<M; i++ ) {
		scanf( "%d", &s[i] );
	}
	
	for( int i=0; i<len; i++ ) {
		printf("%d ",s[i]);
	}
	printf("%d",s[len]);
	return 0;
}