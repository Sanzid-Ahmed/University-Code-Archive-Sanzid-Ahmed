#include <stdio.h>

struct student
{
    char name[100];
    int id;
    int marks[5];
    float average;
};

struct student s[100];

void newStudent(int n);
void displayStudent(int n);
void topPerformer(int n);
void failingStudents(int n);

int main()
{
    int choice;
    int n = 0;
    printf("Press 1 for Add new student\nPress 2 for Display all student\nPress 3 for Find top performer\nPress 4 for Find failing students\Press 5 for Exit\n\n\n");
        while(1)
        {

            printf("Enter your choice: ");
            scanf("%d", &choice);
            if(choice == 1)
            {
                if(n < 100)
                    newStudent(n);
                else
                    printf("You enter 100 students information");
                n++;
            }
            else if(choice == 2)
                displayStudent(n);
            else if(choice == 3)
                topPerformer(n);
            else if(choice == 4)
                failingStudents(n);
            else if(choice == 5)
                break;
            else
                printf("Please enter option between 1 to 5");
        }
}

void newStudent(int n)
{
    printf("Enter %d No student name: ", n + 1);
    getchar();
    scanf("%[^\n]", s[n].name);
    printf("Enter %s's ID: ", s[n].name);
    scanf("%d", &s[n].id);
    printf("Enter %s's marks: ", s[n].name);
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &s[n].marks[i]);
        sum += s[n].marks[i];
    }
    s[n].average = sum / 5.0;

    printf("\n\n");
}


void displayStudent(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Student No: %d\n\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("ID: %d\n", s[i].id);
        printf("Marks: ");
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n");
        printf("Average mark: %.2f", s[i].average);

        printf("\n\n");
    }
}


void topPerformer(int n)
{
    int top = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[top].average < s[i].average)
            top = i;
    }

    printf("Top performer: %s mark: %f\n", s[top].name, s[top].average);
}

void failingStudents(int n)
{
    for(int i = 0; i < n; i++)
    {
        int c = 0;
        for(int j = 0; j < 5; j++)
        {
            if(s[i].marks[j] <= 40)
                c++;
        }

        if(c > 0)
        {
            printf("Name: %s\nID: %d\nFailed subject number:%d\n", s[i].name, s[i].id, c);
        }
        printf("\n\n");
    }
}
