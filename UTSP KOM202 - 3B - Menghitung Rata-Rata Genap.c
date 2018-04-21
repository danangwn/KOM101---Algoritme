#include <stdio.h>
int main(){

int x,y, jum=0, a=0;
scanf("%d %d", &x, &y);
while(x<=y)
{
	if(x%2==1){
		jum=jum+x+1;
		x+=3;
		++a;
		}
	else{
		jum=jum+x;
		x+=2;
		++a;}
}
	jum=jum/a;
	printf("%d\n", jum);
	
	return 0;
}
