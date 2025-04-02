#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0, t1[n];
    do
    {
        scanf("%d", &a[i]);
        t1[i] = a[i];
        i++;
    }
    while(i < n);

    int m;
    scanf("%d", &m);

    int b[m], j = 0, t2[m];
    do
    {
        scanf("%d", &b[j]);
        t2[j] = b[j];
        j++;
    }
    while(j < m);

    int Newa[m], k = 0;
    printf("Array A : ");
    do
    {
        Newa[k] = t2[k];
        printf("%d ", Newa[k]);
        k++;
    }
    while(k < m);

    printf("\n");
    int Newb[n], l = 0;
    printf("Array B : ");
    do
    {
        Newb[l] = t1[l];
        printf("%d ", Newb[l]);
        l++;
    }
    while(l < n);

    return 0;
}
