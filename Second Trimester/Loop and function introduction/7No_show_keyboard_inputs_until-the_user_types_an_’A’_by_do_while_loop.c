#include <stdio.h>

int main()
{
    char ch, i=1;

    do
    {
        scanf("%c", &ch);
        getchar();
        if (ch == 'A')
            break;
        printf("Input %d:%c\n", i, ch);
        i++;
    }
    while (ch != 'A'); // or we can use while (1); that meant always true. if we use while (0); that means always false and it exicuite the loop 1 times.

    return 0;
}
