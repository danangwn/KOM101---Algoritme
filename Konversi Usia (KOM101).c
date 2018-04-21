#include <stdio.h>
int main()
{
    int year,age,month;
    scanf("%d",&age);
    year=age/12;
    month=age%12;
    printf("%d %d\n", year, month);
    return 0;

}
