#include <stdio.h>

struct student{
    char name[50];
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

    for(int i = 0; i < 2; i++)
    {
        printf("%s\n%d\n%f\n\n", s[i].name, s[i].ID, s[i].cg);
    }

    return 0;
}
