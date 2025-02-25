#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d",&n);

    for(i=1; i<=n; i+=2)        //i=1, 1+2=3, 3+2=5 it will update like this way. If i = 0 then it will print all even number till n number.
    {
            printf("%d ",i);
    }

    return 0;
}
