#include <stdio.h>

int main()
{
    int a, c = 0, b, t;
    scanf("%d", &a);

    t = a;

    while (a != 0)
    {
        b = a % 10;
        c *= 10;
        c += b;
        a /= 10;
    }

    if (t == c)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
