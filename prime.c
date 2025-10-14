#include <stdio.h>
int main(){
    int n=11;
    int isPrime=1;
    if(n<=1){
        printf("prime no");
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("no. is prime");

    }else
    {
        printf("not a prime number");
    }