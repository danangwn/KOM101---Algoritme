#include <stdio.h>
int main()
{
	int umur;
	scanf("%d", &umur);
	if(umur<16) printf("Too young to drive\n");
	else if(umur==16) printf("Better clear the road\n");
	else printf("You are getting pretty old\n");
	return 0;
}
