#include <stdio.h>

struct student
{
    char name[50];
    int ID;
    float cg;
};

void High_CG(struct student s1, struct student s2);

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

    High_CG(s[0], s[1]);

    return 0;
}

void High_CG(struct student s1, struct student s2)
{
    struct student batter;

    if(s1.cg > s2.cg)
        batter = s1;
    else
        batter = s2;

    printf("\n\n%s\n%d\n%.2f\n", batter.name, batter.ID, batter.cg);
}
