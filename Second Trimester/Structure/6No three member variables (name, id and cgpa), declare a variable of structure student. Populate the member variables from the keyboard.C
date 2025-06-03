#include <stdio.h>

struct student
{
    char name[100];
    int ID;
    float cg;
};

int main()
{
    int n;
    printf("How many students details do you want to store?\n=>");
    scanf("%d", &n);

    struct student s[n];

    for(int i = 0; i < n; i++)
    {
        getchar();
        printf("Enter name: ");
        scanf("%[^\n]", &s[i].name);
        printf("Emter ID: ");
        scanf("%d", &s[i].ID);
        printf("Enter CG: ");
        scanf("%f", &s[i].cg);
    }


    for(int i = 0; i < n; i++)
    {
        printf("\n\n\n%s\n", s[i].name);
        printf("%d\n", s[i].ID);
        printf("%.2f\n", s[i].cg);
    }
}
