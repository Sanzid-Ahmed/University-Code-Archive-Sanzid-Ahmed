#include <stdio.h>

int main()
{
    char ch, i = 1;

    while (1)
    {
        scanf("%c", &ch);
        getchar();
        if (ch == 'A')
        break;

        printf("Input %d:%c\n",i ,ch);
        i++;
    }
    return 0;
}
