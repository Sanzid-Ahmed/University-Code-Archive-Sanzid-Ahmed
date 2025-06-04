#include <stdio.h>

struct triangle
{
    int tID;
    int base;
    int height;
};

int main()
{
    struct triangle t[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &t[i].tID);
        scanf("%d", &t[i].base);
        scanf("%d", &t[i].height);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("Area of %d = %d\n\n", i + 1, (t[i].base * t[i].height)/2);
    }

    return 0;
}
