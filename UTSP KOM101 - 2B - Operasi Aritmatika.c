#include <stdio.h>

int main()
{
   long long int a,b,c,d;
   double e;
   scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
   e=1.0*((a*=c)+(b*0.2)+d);
   printf("%.2lf\n", e);
   return 0;
}
