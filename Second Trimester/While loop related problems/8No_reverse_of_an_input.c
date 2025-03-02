#include <stdio.h>

int main()
{
    int a , c=0;
    scanf("%d",&a);

    while (a>0)
    {
        int b = a % 10;
        c *= 10;                 //এই line এ লেখেছিলাম  c += b;
        c += b;                  //এই line এ লেখেছিলাম  c *= 10;
        a /= 10;
    }
    printf("%d",c);          //যার কারনে c/10 দেয়ার লাগছে printf এর ভিতরে।
}
