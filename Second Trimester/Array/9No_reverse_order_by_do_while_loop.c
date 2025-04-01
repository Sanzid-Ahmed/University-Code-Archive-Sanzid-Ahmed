#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char ch[n];
    int i = 0;

    do
    {
        getchar();
        scanf("%c", &ch[i]);
        i++;
    }
    while(i < n);

    int j = 0, c = 0;

    do
    {
        if(ch[j] == 'A' || ch[j] == 'a' || ch[j] == 'E' || ch[j] == 'e' || ch[j] == 'I' || ch[j] == 'i' || ch[j] == 'O' || ch[j] == 'o' || ch[j] == 'U' || ch[j] == 'u')
        c++;
        j++;
    }
    while(j < n);

    printf("%d", c);

    return 0;
}
