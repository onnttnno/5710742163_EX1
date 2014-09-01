#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A;
    int a;
    printf("Enter number: ");
    scanf("%d",&A);
    a=(A%7);
    if (a<=0)
    {
        printf("The number division by 7 without remainder\n");
    }
    else
    {
        printf("The number division by 7  has remainder\n");
    }

}
