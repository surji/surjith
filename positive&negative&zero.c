#include<stdio.h>
#include<conio.h>
void main()
{

    int s=0;
    printf("\n enter the number");
    scanf("\n%d",&s);
    if(s>=1)
        printf("\n the number is positive");
    else if(s==0)
        printf("\n the number is zero");
    else
        printf("\n the number is negative");
}
