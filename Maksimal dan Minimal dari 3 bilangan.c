#include <stdio.h>

int main()
{
    int a,b,c,m,n;
    scanf("%d %d %d", &a,&b,&c);
    m=((a>b&&b>c)||(a>c&&c>b)?a:(b>a&&a>c)||(b>c&&c>a)?b:c);
    n=((a<b&&b<c)||(a<c&&c<b)?a:(b<a&&a<c)||(b<c&&c<a)?b:c);

    printf("%d %d", m,n);
}


