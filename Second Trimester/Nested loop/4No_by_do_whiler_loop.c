#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    do
    {
        int space = i;
        do
        {   if(i == n) // যেহেতু condition পরে check করে তাই last line এও space আসে।
            {
                break;
            }
            printf(" ");
            space++;
        }
        while(space < n);

        int num = 1;
        do
        {
            printf("%d", i);
            num++;
        }
        while(num <= i);

        i++;
        printf("\n");
    }
    while(i <= n);
}
