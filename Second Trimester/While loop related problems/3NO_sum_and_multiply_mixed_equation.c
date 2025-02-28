#include <stdio.h>

int main()
{
    int a=1 , b=3, c, d=0, n, i=1;
    scanf("%d",&n);

    while(i<=n)
    {
        c=a*b;
        d+=c;
        a*=2;
        b+=3;
        i++; //while loop এ i++ দিতে ভুলে যাই যার কারনে  circle করে না।
    }
    printf("%d",d);

    return 0;
}
