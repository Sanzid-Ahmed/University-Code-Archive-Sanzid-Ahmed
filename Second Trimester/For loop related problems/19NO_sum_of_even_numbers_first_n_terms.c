#include <stdio.h>

int main()
{
    int a=2, sum=0, n, i; //I dont initialize the value of sum
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        sum+=a;
        a+=2;
    }
    printf("%d",sum);

    return 0;
}
