#include <stdio.h>

int main()
{
    int a, i, b=1, c=0;
    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        c+=b;
        b*=2;
    }
    printf("%d",c);

    return 0;
}
