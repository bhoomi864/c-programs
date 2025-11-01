//  waP TO calculate the sum of the numbers occuriung in the multiplication table of 8
#include<stdio.h>
int main()
{
    int sum =0;
    for (int i=0;i<=10;i++)
    {
        sum+=8*i;
    }
    printf(" sum is %d\n",sum);
    }
