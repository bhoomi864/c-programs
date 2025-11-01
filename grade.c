/*write a program to find a grade ofr a student given his marks based on below 
90-100=A
80-90=B
70-80=C
60-70=D
50-60=E
<50=F */
#include<stdio.h>
int main()
{
    char grade;
    int marks=46;
    if(marks<=100 && marks>=90)
    {
       printf  ("grade %c",'A');
     }
     else if(marks<=90 && marks>=80)
     {
        printf  ("grade %c",'B');
     }
     else if(marks<=80 && marks>=70){
        printf  ("grade %c",'C');
     }
     else if (marks<=70 && marks>=60){
        printf  ("grade %c",'D');
     }
     else if (marks<=60 && marks>=50)
{ 
    printf  ("grade %c",'E');

}
else{
    printf  ("grade %c",'F');
}
return 0;
}