#include<stdio.h>
#include<string.h>
int give_value(char c);
int main(void)
{
    char str[500];int i=0,j=0;char s[100];
    printf("cmd line argv = ");
   // scanf("%d",&n);
   fgets(s,100,stdin);
   // scanf("%c",str);
   printf("\nto be encrypted ");
   fgets(str,500,stdin);
   int l=strlen(s)-1;

   while(str[j]!='\0')
   { if(i==l)
   {
       i=0;
   }
      if(str[j]>=65&&str[j]<91)
       {
         str[j]=((str[j]+give_value(s[i])-65)%26)+65;
       }
        else
            if(str[j]>=97&&str[j]<123)
             {
                // printf("%d%d\n",i,j);
                 str[j]=((str[j]+give_value(s[i])-97)%26)+97;
             }
       i++;j++;
   }
   // int a=give_value(str[2]);
   str[j]='\0';
    printf("%s",str);
}
int give_value(char c)
{
    if(c>='A'&&c<'Z')
    {
        return ((c-65)%26);
    }
    if(c>='a'&&c<'z')
    {
        return ((c-97)%26);
    }

    return 0;
}
