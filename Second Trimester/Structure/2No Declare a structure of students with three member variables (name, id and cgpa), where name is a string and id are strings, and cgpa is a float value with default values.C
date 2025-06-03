#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    char ID[50];
    float cg;
};

int main ()
{
    struct student s1;

    strcpy(s1.name, "Unknown");
    strcpy(s1.ID, "000000");
    s1.cg = 0.0f;

    struct student s2 = {"Unknown", "000000", 0.0f};


    printf("Student 01 =>\nname: %s\nID: %s\nCGPA:%f\n", s1.name, s1.ID, s1.cg);
    printf("\n\nStydent 02 =>\nname: %s\nID: %s\nCGPA:%f\n", s2.name, s2.ID, s2.cg);

    return 0;
}
