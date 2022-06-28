#include <stdio.h>
/*
int amount[] = {1,5,10,25,50};
char *name[] = {"penny","nickel","dime","quarter","half-dollar"};
被结构体替代
*/
struct {
	int amount;
	char *name;
} coins[] = {
	{1,"penny"},
	{5,"nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"} 
};

int main(int argc, char** argv) {
	int k=10;
	for (int i=0; i<sizeof(coins)/sizeof(coins[0]); i++){
		if ( k==coins[i].amount){
			printf("%s",coins[i].name);
			break;
		}
	}
	return 0;
}
