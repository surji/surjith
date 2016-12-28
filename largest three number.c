#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,c;
    printf("\n enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\n a is larg");

    }
    else if(b>a&&b>c)
    {

        printf("\n b is large");
    }
    else
    {

        printf("\n c is large");
    }
return 0;
}
