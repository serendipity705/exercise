#include <stdio.h>

struct time {
	int hour;
	int minute;
	int second;
} day;

struct time* enter( struct time *p);
void Calculate( struct time *p);

int main(int argc, char** argv) {
	Calculate( enter( &day) );

	printf("%02d:%02d:%02d\n", day.hour, day.minute, day.second);

	return 0;
}

struct time* enter( struct time *p) {
	scanf("%d:%d:%d", &p->hour, &p->minute, &p->second);
	return p;
}

void Calculate( struct time *p) {
	int increase;
	scanf("%d", &increase);
	
	p->second += increase;
	if( p->second >= 60 ) {
		p->minute += p->second/60;
		p->second = p->second%60;
	}
	if( p->minute >= 60 ) {
		p->hour += p->minute/60;
		p->minute = p->minute%60;
	}
	if( p->hour >= 24 )	p->hour %= 24;
}
