#include<stdio.h>
#include<cs50.h>
int main(void)
{
    printf("Height: ");
   int height=get_int(); int l=1;

  for(int i=0;i<height&&height<23;i++)
      {
          for(int j=height;j>i;j--)
          {
              printf(" ");
          }
          for(int k=0;k<=l;k++)
          {
              printf("#");
              if(k==l/2)
              {
                  printf(" ");
              }
          }l=l+2;
          printf("\n");
      }

}