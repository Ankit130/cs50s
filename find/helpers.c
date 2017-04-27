/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
     // TODO: implement a searching algorithm
    for(int i = 0;i<n;i++)
    {
        if(values[i]==value)
        return true;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
     int c;
     do
     { int b=0;
       c=0;
         for(int i = 0;i<(n-2);i++)
         {   
             if(values[i]>values[i+1])
             {
                b=values[i];
                values[i]=values[i+1];
                values[i+1]=b;
                c++;
                n--;
             }
         }
     }while(c!=0);
    return;
}
