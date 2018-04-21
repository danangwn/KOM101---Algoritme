#include <stdio.h>
int main()
{
    float jarijariLingkaran;
    float kelilingLingkaran;
        float luasLingkaran;
    scanf("%f", &jarijariLingkaran);
    kelilingLingkaran=2*3.14*jarijariLingkaran;
    luasLingkaran=3.14*jarijariLingkaran*jarijariLingkaran;
    printf("%.2f %.2f\n",luasLingkaran,kelilingLingkaran);
return 0;
}
