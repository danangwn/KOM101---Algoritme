#include <stdio.h>

long double faktorial(int n)
{
    if(n==0) return 1;
    else if(n>0) return n*faktorial(n-1);
    return 0;
}

int main()
{
    unsigned int n;
    scanf("%u", &n);
    printf("%.0Lf\n", faktorial(n));
    return 0;
}
