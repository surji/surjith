#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{

    char a;
    printf("\n enter the alphabets:");
    scanf("%c",&a);
    if(isalpha(a))
    {

        printf("\n it is alpha");
    }
    else
    {

        printf("\n it is not alpha");
    }
    return 0;
}
