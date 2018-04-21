#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &c);
    d=a+b+c;
    if(((a<90)&&(b<90)&&(c<90))&&(d==180)&&((a!=b)&&(a!=c))){if((a==b)||(b==c)||(a==c)) printf("Segitiga lancip sama-kaki\n");
        else printf("Segitiga lancip\n");}
    else if(((a==90)||(b==90)||(c==90))&&(d==180)){if((a==b)||(b==c)||(a==c)) printf("Segitiga siku-siku sama-kaki\n");
        else printf("Segitiga siku-siku\n");}
    else if(((a>90)||(b>90)||(c>90))&&(d==180)){if((a==b)||(b==c)||(a==c)) printf("Segitiga tumpul sama-kaki\n");
        else printf("Segitiga tumpul\n");}
    else if(((a==b)&&(a==c))&&(d==180)) printf("Segitiga sama-sisi\n");
    else
    return 0;

}
