#include <stdio.h>

int main()
{
    int a, n, i, sum=0; // common problem i do not diclare the value of variable then it calculate with a garbage value.
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        a=i*(i+1);
        sum+=a;
    }
    printf("%d",sum);

    return 0;
}
