#include <stdio.h>
int main()
{
	long long int a,b,c;
	c=1;
	scanf("%lld", &a);
	while(a>=c){
		
		scanf("%lld", &b);
		if(b<1000) printf("LEBIH KECIL\n");
			else printf("LEBIH BESAR ATAU SAMA DENGAN\n");	
		c+=1;
	}
	
	return 0;
}
