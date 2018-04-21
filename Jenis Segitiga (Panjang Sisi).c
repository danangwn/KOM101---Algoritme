#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if((a==b)&&(a==c)) printf("Segitiga Sama Sisi\n");
    else if(((a==b)||(a==c)||(b==c))&&((a<b+c)&&(b<a+c)&&(c<a+b))) printf("Segitiga Sama Kaki\n");
    else if((a<b+c)&&(b<a+c)&&(c<a+b)) printf("Segitiga Sembarang\n");
    else printf("Bukan Segitiga\n");
    return 0;

}
