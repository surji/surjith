#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("\n enter the year:");
    scanf("%d",&n);
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)

                printf("\n %d is a leap year",n);
                else
                    printf("\n %d is not leap year",n);
        }
            else

                printf("\n %d is leap year",n);
            }
                else
                    printf("\n %d is not leap year",n
                           );
            return 0;
    }

