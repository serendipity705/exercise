#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = fopen("12.in", "r");
	if ( fp ) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d", num);
		fclose(fp);
	} else {
		printf("无法打开文件\n");
	}
	return 0;
}