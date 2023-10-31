#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values for a, b and c: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && b>c)
    {
        printf("a is the largest\n", &a);
    }
    if (b>a && b>c)
    {
        printf("b is the largest", &b);
    }
    if (c>b && c>a)
    {
        printf("c is the largest", &c);
    }
  return 0;
}