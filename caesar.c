#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[500];int i=0,n;
    scanf("%d",&n);
    scanf("%c",str);
    fgets(str,500,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<91)
       {
            str[i]=((str[i]+n-65)%26)+65;
       }
        else
            if(str[i]>=97&&str[i]<123)
        {
             str[i]=((str[i]+n-97)%26)+97;

        }

    }
    str[i]='\0';
    printf("%s",str);
}
