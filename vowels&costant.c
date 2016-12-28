#include <stdio.h>
#include <conio.h>
void main()
{
   char s;
   printf("\n enter the character:");
   scanf("\n%c",&s);
   if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'&&s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
   {

       printf("\n given charactr %c is vowvel",s);
   }
   else
   {
       printf("\n given character %c is constant",s);

   }
}
