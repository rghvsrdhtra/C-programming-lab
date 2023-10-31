#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c: ");

    int sum=a+b+c;
    scanf("%d %d %d", &a, &b, &c);

    if (sum>=100 && sum<=200)
    {
        printf("the sum is between range 100-200");
    }
    else
    {
        printf("the sum is not between range 100-200");
    }
}