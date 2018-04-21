#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    
    b=0;
    while(a>0){
		
		a/=10;
		b+=1;
		}
	printf("%d\n", b);
return 0;
}
   
		
