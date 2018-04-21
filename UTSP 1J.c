#include <stdio.h>
#include <math.h>
int main()
{
    int guladarah,tekanandarah,gd,td;
    scanf("%d %d", &guladarah, &tekanandarah);
    gd=abs(guladarah-110);
    td=abs(tekanandarah-140);
    if(70<=guladarah&&guladarah<=110)
    printf("KADAR GULA NORMAL %d\n",gd);
        else
        printf("KADAR GULA TIDAK NORMAL %d\n",gd);
    if(100<=tekanandarah&&tekanandarah<=140)
    printf("TEKANAN DARAH NORMAL %d\n",td);
        else
        printf("TEKANAN DARAH TIDAK NORMAL %d\n",td);

return 0;
}
