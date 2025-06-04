#include <stdio.h>

struct player
{
    char name[100];
    char country[100];
    int run[3];
    int wicket[3];
    int point[3];
};

int main()
{
    int n;
    printf("How many players data you want to save?\n=>");
    scanf("%d", &n);

    struct player p[n];

    for(int i = 0; i < n; i++)
    {
        printf("\n\nEnter player name: ");
        getchar();
        scanf("%[^\n]", &p[i].name);

        printf("\nEnter player's country: ");
        getchar();
        scanf("%[^\n]", p[i].country);

        printf("\nEnter runs in 3 matchs:\n");
        getchar();
        for(int j = 0; j < 3; j++)
        {
            p[i].point[j] = 0;
            scanf("%d", &p[i].run[j]);
            if(p[i].run[j] <= 25)
                p[i].point[j] += 5;
            else if(p[i].run[j] > 25 && p[i].run[j] <= 50)
                p[i].point[j] += 10;
            else if(p[i].run[j] > 50 && p[i].run[j] <= 75)
                p[i].point[j] += 15;
            else if(75 < p[i].run[j])
                p[i].point[j] += 20;

        }

        printf("\nEnter wickets of 3 matchs:\n");
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &p[i].wicket[j]);
            p[i].point[j] += (p[i].wicket[j] * 12);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\n\n\nMatch %d:\n\nSakib Al Hasan Pointa: %d\n\nTamim Iqbal points: %d", i+1, p[0].point[i], p[1].point[i]);
    }

    return 0;
}
