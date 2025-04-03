#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0, t1[n];
    while(i < n)
    {
        scanf("%d", &a[i]);
        t1[i] = a[i];
        i++;
    }

    int m;
    scanf("%d", &m);

    int b[m], j = 0, t2[m];
    while(j < m)
    {
        scanf("%d", &b[j]);
        t2[j] = b[j];
        j++;
    }

    int Newa[m], k = 0;
    printf("Array A : ");
    while(k < m)
    {
        Newa[k] = t2[k];
        printf("%d ", Newa[k]);
        k++;
    }

    printf("\n");
    int Newb[n], l = 0;
    printf("Array B : ");
    while(l < n)
    {
        Newb[l] = t1[l];
        printf("%d ", Newb[l]);
        l++;
    }

    return 0;
}
