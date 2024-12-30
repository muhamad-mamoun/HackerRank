#include <stdio.h>

int main(void)
{
    char character, string[100], sentence[100];
    scanf("%c", &character);
    scanf("%s", string);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n", character);
    printf("%s\n", string);
    printf("%s\n", sentence);
    return 0;
}