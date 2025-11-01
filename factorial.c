#include<stdio.h>
int main()
{
    int product=1,n=4;
    for(int i = 1;i<=4;i++)
    {
        product*=i;//product=product*i
    }
    printf(" the factorial is %d\n",product);
}