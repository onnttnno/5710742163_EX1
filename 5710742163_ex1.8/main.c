#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float hight;
    float x;
    printf("area\n\n");
    printf("base= ");
    scanf("%f",&base);
    printf("hight= ");
    scanf("%f",&hight);
    x=(hight*base)/2;
    printf("area= %.2f",x);
    return 0 ;



}
