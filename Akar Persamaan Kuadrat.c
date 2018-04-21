#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    scanf("%d %d %d", &a, &b, &c);
    d=(b*b)-(4*a*c);
    x1=(-b*1.0+sqrt(d))/(2*a);
    x2=(-b*1.0-sqrt(d))/(2*a);
    if(d>=0)
    printf("%g %g\n",x1,x2);
    else if(d<0)
        printf("Tidak memiliki akar real.\n");
return 0;
}
