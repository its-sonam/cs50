#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float d=get_float(); int c=0;
    int cent=(int)100*d;
    printf("cent shopkeeper owns=%d\n",cent);
    while(cent>=25)
    {
        cent=cent-25;
        c++;
    }

  while(cent>=10)
    {
        cent=cent-10;
        c++;
    }

  while(cent>=5)
    {
        cent=cent-5;
        c++;
    }

   if(cent>=1)
    {
    //  cent=cent-1;
      c=cent+c;
    }


    printf("%d",c);
}