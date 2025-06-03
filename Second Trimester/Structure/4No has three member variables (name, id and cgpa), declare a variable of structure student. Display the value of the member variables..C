#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int ID;
    float cg;
};

int main()
{
    struct student s1;

    strcpy(s1.name, "Sanzid Ahmed");
    s1.ID = 12344567;
    s1.cg = 4.00;

    printf("%s\n", s1.name);
    printf("%d\n", s1.ID);
    printf("%.2f", s1.cg);

    return 0;
}
