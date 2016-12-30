
#include<stdio.h>
#include<conio.h>
void main()
{

    int n,b,sum=0;
    printf("\n enter the positive number:");
    scanf("%d",&n);
    b=1;
    while(b<n)
    {
        sum+=b;
    ++b;

    }

printf("\n sum=%d",sum);
return 0;
}
