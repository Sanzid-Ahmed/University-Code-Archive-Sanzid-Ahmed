#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    int c = 0;

    for(int j = 0; j < n; j++)
    {
        if(a[j] == 'A' || a[j] == 'E' || a[j] == 'I' || a[j] == 'O' || a[j] == 'U' || a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u')
        c++;
    }

    printf("\nCount: %d\n", c);

    return 0;
}
