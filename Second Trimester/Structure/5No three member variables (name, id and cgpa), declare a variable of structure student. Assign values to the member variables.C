#include <stdio.h>

struct student {
    char name[50];
    int id;
    float cgpa;
};

int main() {
    struct student s1;

    // Assigning values to the member variables
    strcpy(s1.name, "Sanzid Ahmed");  // use strcpy for string assignment
    s1.id = 12345;
    s1.cgpa = 3.85;

    // Printing the values
    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}