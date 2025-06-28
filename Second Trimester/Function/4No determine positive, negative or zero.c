#include <stdio.h>

void sign(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    sign(int num);

    return 0;
}

void sign(int n)
{
    if(n > 0)
    printf("Positive");
    else if(n < 0)
    printf("Negative");
    else
    printf("Zero");
}
