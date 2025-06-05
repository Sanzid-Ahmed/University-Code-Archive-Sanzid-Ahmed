#include <stdio.h>

struct players
{
    char name[100];
    char country[100];
    int runs[3];
    int wickets[3];
    int points[3];
};

int main()
{
    int n;
    printf("You work with how many players data?\n=>");
    scanf("%d", &n);
    struct players p[n];

    for(int i = 0; i < n; i++)
    {
        printf("\n\n\nEnter %d No players name: ", i + 1);
        getchar();
        scanf("%[^\n]", &p[i].name);

        printf("\n\nWhat is %s's country name: ", p[i].name);
        getchar();
        scanf("%[^\n]", p[i].country);

        printf("\n\nEnter the runs of %s in 3 matches: \n", p[i].name);
        for(int j = 0; j < 3; j++)
        {
            printf("Match %d: ", j + 1);
            scanf("%d", &p[i].runs[j]);

            if(p[i].runs[j] <= 25)
                p[i].points[j] = 5;
            else if(p[i].runs[j] > 25 && p[i].runs[j] <= 50)
                p[i].points[j] = 10;
            else if(p[i].runs[j] > 50 && p[i].runs[j] <= 75)
                p[i].points[j] = 15;
            else
                p[i].points[j] = 20;

        }

        printf("\n\nEnter the wickets of %s in 3 matches: \n", p[i].name);
        for(int j = 0; j < 3; j++)
        {
            printf("Match %d: ", j + 1);
            scanf("%d", &p[i].wickets[j]);

            p[i].points[j] += p[i].wickets[j] * 12;
        }
    }

    int a[n] = {0};
    for(int i = 0; i < 3; i++)
    {
        int mom = 0, position = 0;
        printf("\n\n\n\nMatch No: %d \n\n", i + 1);
        for(int j = 0; j < n; j++)
        {
            printf("%s's points: %d\n", p[j].name, p[j].points[i]);
            a[j] += p[j].points[i];
            if(mom < p[j].points[i])
            {
                mom = p[j].points[i];
                position = j;
            }
        }

        printf("MOM :%s\n", p[position].name);
    }

    int max = 0, position = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            position = i;
        }
    }

    printf("\n\n\nMan of the Series: %s\n", p[position].name);

    return 0;
}
