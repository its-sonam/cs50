#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{

      long long cno = get_long_long() ;
      long long temp= cno ;
    int d=0, c=0, sum= 0 ;
    int sum1 = 0 ;
    while (cno >0)
    {
        d = cno % 10 ;
        c++ ;
        temp= (cno - d) / 10 ;
        break ;

        for (c= 0 ; c%2==0 ;c++)
        {
            sum= sum+((cno%10)*2) ;
            while ((cno%10)*2>=10)
            {
                sum = (sum%10) + 1 ;
            }
        }

        for (c = 0 ; c % 2 != 0 ; c++)
        {
            sum1=sum1+d;
        }

        return sum ;
      return sum1 ;
       return c ;
    }
int total= sum + sum1;

    if (total%10 != 0)
    {
       printf("This is an invalid number.\n") ;
    }

    if (c!= 13 || c != 15 || c!= 16)
    {
        printf("invalid number.\n") ;
    }

    temp= cno ;
    int id ;

    while (temp> 100)
    {
        temp = cno - (cno% 10) ;
        id = temp / 10 ;
    }

    return id ;

    if (id > 50 && id < 56 && c== 16)
    {
        printf("MASTERCARD\n") ;
    }
    else if ((id == 4) && (c== 13 || c== 16))
    {
        printf("VISA\n") ;
    }
    else if ((id== 34 || id == 37) && (c== 15))
    {
        printf("AMEX\n") ;
    }
    else
    {
        printf("Invalid\n") ;
    }


}