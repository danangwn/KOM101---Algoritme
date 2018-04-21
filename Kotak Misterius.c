#include <stdio.h>

int main()
{
long long total, harga, jum, har, i, biaya=0;

while (scanf("%lld %lld", &harga, &jum)>0)

    {

total=0;

        for (i=1;i<=jum;i++)
		{
scanf("%lld", &har);

            total+=har;

        }

        if (harga*10==total) 
{biaya+=harga;printf("%lld\n", biaya);break;}
 
       else {biaya+=harga;}
 
   }
   
 return 0;
}
