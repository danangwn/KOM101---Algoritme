#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x!=-1)
    {
		if(abs(x%2)==1)
			printf("%d ganjil\n", x); 
			scanf("%d", &x);}
		
		return 0; 
}
