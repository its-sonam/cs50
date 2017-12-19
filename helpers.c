 /**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include "helpers.h"
#include<stdio.h>
/**
 * Returns true if value is in array of n values, else false.
 */
 int bst(int search, int array[], int n);
bool search(int value, int values[], int n)
{
 /*  int l,h,m;
   m=(n-1)/2;
   if(n<0)
   {
       return false;
   }
   if(values[m]==value)
   {
       return true;
   }
   if(values[m]<value)
   {
       l=m+1; h=n-1;
       return search(value,values,(n/2));

   }
   if(values[m]>value)
   {
       l=0; h=m-1;
     return search(value,values,(n/2));
   }


    // TODO: implement a searching algorithm
    return false;
    */
   int t= bst(value,values,n);
   return t;

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int i=0,j=0,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(values[i]<values[j])
            {
                temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
        }
    }



    // TODO: implement a sorting algorithm
  return;
}
int bst(int search, int array[], int n)
{
   int first, last, middle;
   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last)
   {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search)
      {
       //  printf("%d found at location %d.\n", search, middle+1);
        return 1;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
   //   printf("Not found! %d is not present in the list.\n", search);
   return 0;
   return 0;
}
