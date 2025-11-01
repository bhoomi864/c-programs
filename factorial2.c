#include<stdio.h>
int main()
{
    int product=1,n=4,i=1;
    do{
        product*=i;
    }
    while(i<=n);
    {
    i++;}
    printf("factoriAL IS %d\n",product);
}