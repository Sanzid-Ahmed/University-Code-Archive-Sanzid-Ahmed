#include <stdio.h>

void character(char ch);

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    character(ch);

    return 0;
}

void character(char ch)
{
    printf("Value recived from main: %c", ch);
}
