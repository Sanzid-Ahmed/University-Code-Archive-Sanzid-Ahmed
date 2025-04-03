#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], temp1[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        temp1[i] = a[i];
    }

    int m;
    scanf("%d", &m);

    int b[m], temp2[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        temp2[i] = b[i];
    }

    int Newa[m];
    printf("Array A : ");
    for(int i = 0; i < m; i++)
    {
        Newa[i] = temp2[i];
        printf("%d ", Newa[i]);
    }

    printf("\n");
    int Newb[n];
    printf("Array B : ");
    for(int i = 0; i < n; i++)
    {
        Newb[i] = temp1[i];
        printf("%d ", Newb[i]);
    }

    return 0;
}
