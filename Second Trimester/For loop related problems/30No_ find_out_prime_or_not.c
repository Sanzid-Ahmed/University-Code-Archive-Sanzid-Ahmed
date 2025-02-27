#include <stdio.h>

int main()
{
    int a, i;
    scanf("%d",&a);

    for (i=a-1; i>1; i--)
    {
        if(a%i==0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");

    return 0;
}
