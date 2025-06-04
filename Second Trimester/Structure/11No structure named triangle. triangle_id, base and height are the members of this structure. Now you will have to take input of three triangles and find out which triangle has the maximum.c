#include <stdio.h>

struct triangle
{
    int ID;
    int base;
    int height;
};

void t_area(struct triangle t[]);

int main()
{
    struct triangle t[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &t[i].ID);
        scanf("%d", &t[i].base);
        scanf("%d", &t[i].height);
    }

    t_area(t);
}

void t_area(struct triangle t[])
{
    int area_1 = (t[0].base * t[0].height) / 2;
    int area_2 = (t[1].base * t[1].height) / 2;
    int area_3 = (t[2].base * t[2].height) / 2;

    if(area_1 > area_2)
        if(area_1 > area_3)
            printf("Area of 1 = %d", area_1);
        else
            printf("Area of 3 = %d", area_3);
    else
        if(area_2 > area_3)
            printf("Area of 2 = %d", area_2);
        else
            printf("Area of 3 = %d", area_3);
}
