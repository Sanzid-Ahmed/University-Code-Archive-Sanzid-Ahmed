#include <stdio.h>

struct student
{
    char name[100];
    char ID[100];
    float cg;
};

int main()
{
    printf("How many students imformatiob do you want to save?\n=>");
    int n;
    scanf("%d", &n);

    struct student s[n];

    for(int i = 0; i < n; i++)
    {
        if (n == 1)
        printf("Ok, Give the imformation about the student:\n");
        else
        printf("Ok, Give the imformation about the student No %d:\n", i + 1);

        printf("What is the name?\n=>");
        getchar();
        fgets(s[i].name, 100, stdin);
        printf("\nEnter the ID: ");
        //getchar();
        scanf("%[^\n]", s[i].ID);
        printf("\nEnter cgpa: ");
        scanf("%f", &s[i].cg);
    }

    for(int i = 0; i < n; i++)
    {
        if (n == 1)
        printf("\n\nThe imformation about the student:\n");
        else
        printf("\n\nImformation about the student No %d:\n", i + 1);

        printf("\nStudent %d name is\n=>%s", i + 1, s[i].name);
        printf("\nID: %s", s[i].ID);
        printf("\ncgpa: %f", s[i].cg);
    }

    return 0;
}
