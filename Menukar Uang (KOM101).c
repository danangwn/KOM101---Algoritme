#include <stdio.h>
int main()
{
    long long int uang,a,b,c,d,e,f;
    scanf("%lld", &uang);
    uang=uang/1000;
    a=uang/100;
    uang%=100;
    b=uang/50;
    uang%=50;
    c=uang/10;
    uang%=10;
    d=uang/5;
    uang%=5;
    e=uang/2;
    uang%=2;
    f=uang/1;
    printf("%lld %lld %lld %lld %lld %lld\n", a,b,c,d,e,f);
    return 0;
}
