#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A;
   int S;
   int D;
   int total;
   float x;
   printf("Enter 3 number\n\n");
   printf("Enter number: ");
   scanf("%d",&A);
   printf("Enter number: ");
   scanf("%d",&S);
   printf("Enter number: ");
   scanf("%d",&D);
   total=A+S+D;
   x=total/3;
   printf ("Average= %.8f",x);
   return 0;

}
