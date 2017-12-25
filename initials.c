#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char name[100];int i=0,j=1,k=0;char initials[50];
   // scanf("%c",name);
    fgets(name,100,stdin);
    for(i=1;name[i]!='\0';i++)
    {
        initials[0]=name[0];
        if(name[i]==' ')
        {
            initials[j]=name[i+1];
            j++;
        }

    }// printf("%s",initials);
     for(k=0;k<j;k++)
     {
         printf("%c",toupper(initials[k]));

     }printf("\n");
}

