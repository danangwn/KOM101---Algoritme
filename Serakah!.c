#include <stdio.h>
int main()
{
    long long maxi, berat, harga, sum=0;
    scanf ("%lld", &maxi);
    while (maxi)
    {
        scanf ("%lld %lld", &berat, &harga);
        if (maxi>=berat) {sum+=berat*harga;maxi-=berat;}
        else {sum+=maxi*harga;break;}
    }
    printf("%lld\n", sum);
    return 0;
}
