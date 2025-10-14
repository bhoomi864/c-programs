#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="aiouabvs";
    int vCount=0;
    int cCount=0;
    int ln = strlen(str);
    for(int i=0;i<ln;i++){
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vCount++;
        }
        else{
            cCount;
        }
        }
    }
