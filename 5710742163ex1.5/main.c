#include <stdio.h>
#include <stdlib.h>

int main()
{
    char B;
    printf("put in character :  ",B);
    scanf("%c",&B );
    if ((B>=65) && (B<=90)) B=(B-65)+97;
    else if ((B<=122)&& (B>=97)) B=(B-97)+65 ;
    else B=B;
    printf("Put out character: %c ",B);
    return 0;


}
