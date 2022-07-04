#include <stdio.h>

struct vector {
	double x;
	double y;
} v1,v2;

int main(int argc, char** argv) {
	scanf("%lf %lf %lf %lf", &v1.x, &v1.y, &v2.x, &v2.y);
	double vx = v1.x+v2.x , vy = v1.y+v2.y;
	if (fabs(vx) < 0.05)	vx = fabs(vx);
	if (fabs(vy) < 0.05)	vy = fabs(vy);
	printf("(%.1f, %.1f)", vx, vy);
	return 0;
}