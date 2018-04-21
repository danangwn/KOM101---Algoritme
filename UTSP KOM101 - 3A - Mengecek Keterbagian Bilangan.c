#include <stdio.h>
int main()
{
	long long int a,b,c;
	c=1;
	scanf("%lld", &a);
	while(a>=c){
		
		scanf("%lld", &b);
		if(b%3==0) printf("HABIS DIBAGI\n");
			else printf("TIDAK HABIS DIBAGI\n");	
		c+=1;
	}
	
	return 0;
}
