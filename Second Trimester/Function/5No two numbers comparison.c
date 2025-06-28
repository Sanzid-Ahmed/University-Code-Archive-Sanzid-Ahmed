#include <stdio.h>

void comparison(int a, int b);

int main()
{
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);

    comparison(n1, n2);

    return 0;
}

void comparison(int a, int b)
{
    if(a > b)
    printf("%d is greater than %d\n", a, b);
    else if(a < b)
    printf("%d is less than %d", a, b);
    else
    printf("%d is equal to %d", a, b);
}
