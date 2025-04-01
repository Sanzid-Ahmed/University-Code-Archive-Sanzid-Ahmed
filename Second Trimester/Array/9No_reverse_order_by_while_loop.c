#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char ch[n];
    int i = 0;

    while(i < n)
    {
        getchar();
        scanf("%c", &ch[i]);
        i++;
    }

    int j = 0, c = 0;
    while(j < n)
    {
        if(ch[j] == 'A' || ch[j] == 'a' || ch[j] == 'E' || ch[j] == 'e' || ch[j] == 'I' || ch[j] == 'i' || ch[j] == 'O' || ch[j] == 'o' || ch[j] == 'u'|| ch[j] == 'U')
        {
            c++;
        }
        j++;
    }
    printf("Count:%d", c);

    return 0;
}
