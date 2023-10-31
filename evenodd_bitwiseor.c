#include <stdio.h>
int main()
{
     int num;
     printf("Enter a number: ");
     scanf("&d", &num);

     ((num|1)==(num+1)) ? printf("%d is odd", num): printf("%d is even", num);

     return 0;
}