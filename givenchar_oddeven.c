#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    int result = (character %2 == 0) ? printf("even") : printf("odd");
    
    printf("%d\n", result);

    return 0;
}