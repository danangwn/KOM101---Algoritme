#include <stdio.h>

int main()
{
    int i,x,y,z;
    scanf("%d %d %d", &i, &x, &y);
    for(z=i; z<=y; z+=x)
        printf("%d\n", z);
    return 0;   
}
