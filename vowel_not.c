#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", character);

    (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || 
    character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') ? printf ("Given Character is a is a vowel") : printf("Given Character is a consonant");
    return 0;
}