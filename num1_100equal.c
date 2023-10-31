#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
int e = (num==1 || num==100) ? printf("1") : printf("0");
return 0;
}