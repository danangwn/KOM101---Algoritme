#include <stdio.h>
int main(){
	int a,b,c,sum=0;
scanf("%d %d", &a,&b);
while(b)
{
c=b%10;
if(c==a)
{
sum+=1;
}
b/=10;
}
printf("%d\n", sum);
return 0;
}
