#include <stdio.h>
#include <math.h>
int main()
{
    long long int akar, n, i=2, sum=0;
    scanf("%lld", &n);
    akar=ceil(sqrt(n));
    while (i<=akar)
    {
        sum=0;
        while (n%i==0)
        {
            n/=i;
            sum+=1;
        }
        if (sum>0)
        {
            printf("%lld^%lld\n", i, sum);
        }
        i++;
    }
    if (n>1)
    {
        printf("%lld^1\n", n);
    }
    return 0;
}
