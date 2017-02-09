#include<stdio.h>
#include<conio.h>
int main()
{
long long h;
    int count=0;
    printf("\n enter the integer");
    scanf("%lld",&h);
    while(h!=0)
    {

        h/=10;
        ++count;
        }
        printf("\n number of digits  %d is",count);
        return 0;
    }

