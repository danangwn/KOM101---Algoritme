#include <stdio.h>
int main()
{
	int coli,q;
	float p,besi;
	scanf("%f %d %f %d", &p,&q,&besi,&coli);
	if((besi<p)&&(coli<q)) {printf("LAYAK\n");}
	else printf("TIDAK LAYAK\n");
	return 0;
}
