#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if ((x%5)==0)
    printf("%d is divisible by 5", x);
    else
    printf("%d is not divisble by 5", x);
    return 0;
}