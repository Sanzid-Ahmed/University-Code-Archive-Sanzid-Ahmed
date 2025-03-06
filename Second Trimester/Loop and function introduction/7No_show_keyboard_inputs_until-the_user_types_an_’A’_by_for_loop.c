#include <stdio.h>

int main()
{
    char ch;

    for (int i = 1; ch!='A'; i++) //  ch!='A' if I do not use this condition it also run the loop
    {
        //if (ch == 'A') i use this condition before user give input so it do not work.
        //break;

        scanf("%c", &ch);
        getchar();
        if (ch == 'A')
        break;
        printf("Input %d: %c\n", i, ch);
    }
    return 0;
}
