#include <stdio.h>

struct student
{
    char name[100];
    int ID;
    float cg;
};

int main()
{
    struct student s[2];

    for(int i = 0; i < 2; i++)
    {
        scanf("%[^\n]", &s[i].name);
        scanf("%d", &s[i].ID);
        scanf("%f", &s[i].cg);
        getchar();
    }

    if(s[0].cg > s[1].cg)
    {
        printf("%s\n", s[0].name);
        printf("%d\n", s[0].ID);
        printf("%f\n", s[0].cg);
    }
    else
    {
        printf("%s\n", s[1].name);
        printf("%d\n", s[1].ID);
        printf("%f\n", s[1].cg);
    }


    return 0;
}
