#include <stdio.h>
#include <string.h>

struct Book
{
    char Title[100];
    char Author_Name[100];
    int Publication_Year;
    char Availability_Status[100];
};

struct Book books[100];

void addBook(struct Book books[], int *count);
void searchBook(struct Book books[], int count, char title[]);
void updateStatus(struct Book books[], int count, char title[]);
void displayBooks(struct Book books[], int count);



int main()
{
    int count = 0;
    int choice;
    char title[100];

    printf("Library Management System:\n1. Add a new book\n2. Search for  a book by Title\n3. Update a book's avaiability status\n4. Display all books\n5. Exit\n");

    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
            addBook(books, &count);
        else if(choice == 2)
        {
            printf("Enter book title to search: ");
            getchar();
            scanf("%[^\n]", title);
            searchBook(books, count, title);
        }

        else if(choice == 3)
        {
            printf("Enter book title to update: ");
            getchar();
            scanf("%[^\n]", title);
            updateStatus(books, count, title);
        }

        else if(choice == 4)displayBooks(books, count);
        else if(choice == 5)
        {
            printf("Exiting the program.\n\n");
            break;
        }
    }
}

void addBook(struct Book books[], int *count)
{

    if (*count >= 100) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter book title: ");
    getchar();
    scanf("%[^\n]", books[*count].Title);
    printf("Enter author name: ");
    getchar();
    scanf("%[^\n]", books[*count].Author_Name);
    printf("Enter publication year: ");
    scanf("%d", &books[*count].Publication_Year);
    printf("Enter availability status (Available/Checked Out): ");
    getchar();
    scanf("%[^\n]", books[*count].Availability_Status);

    (*count)++;
    printf("Output: Book added successfully.\n\n\n");
}

void searchBook(struct Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].Title, title) == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n", books[i].Title, books[i].Author_Name, books[i].Publication_Year, books[i].Availability_Status);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Book not available.\n");
    }
}

void updateStatus(struct Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].Title, title) == 0) {
            printf("Enter new status (Available/Checked Out): ");
            getchar();
            scanf("%[^\n]", books[i].Availability_Status);
            printf("Book status updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Book not found.\n");
    }
}


void displayBooks(struct Book books[], int count) {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].Availability_Status, "Available") == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",books[i].Title, books[i].Author_Name,books[i].Publication_Year, books[i].Availability_Status);
        }
    }

    printf("\nChecked Out Books:\n");
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].Availability_Status, "Checked Out") == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",books[i].Title, books[i].Author_Name,books[i].Publication_Year, books[i].Availability_Status);
        }
    }
}
