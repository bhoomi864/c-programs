#include<stdio.h>
int main(){
    int x=5;
    int*a=&x;
    printf("%d",x);
    printf("%d",&x);
    printf("%d",a);
    printf("%d",*a);
}