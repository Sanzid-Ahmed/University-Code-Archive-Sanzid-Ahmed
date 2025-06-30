#include <stdio.h>

int hasUniqueCharacters(char *str);
void modifyString(char str[]);
int isLuckyNumber(int num);


int main()
{
    char str[100];
    printf("Name: ");
    scanf("%[^\n]", str);

    int age;
    printf("Age: ");
    scanf("%d", &age);

    int n = hasUniqueCharacters(str);
    if(n == 1)
    {
        printf("Unique: Yes\n");
        modifyString(str);
    }

    else
    printf("Unique: No\n");


    n = isLuckyNumber(age);
    if(n == 1)
    printf("Lucky Number: Yes\n");
    else
    printf("Lucky Number: No\n");


    return 0;
}

int hasUniqueCharacters(char *str)
{
    int f = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                f = 0;
                break;
            }
        }

        if(f == 0)
        break;
    }


    return f;
}


void modifyString(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        str[i] = 'b';
        else if(str[i] == 'A')
        str[i] = 'B';
        else if(str[i] == 'e')
        str[i] = 'f';
        else if(str[i] == 'E')
        str[i] = 'F';
        else if(str[i] == 'i')
        str[i] = 'j';
        else if(str[i] == 'I')
        str[i] = 'J';
        else if(str[i] == 'o')
        str[i] = 'p';
        else if(str[i] == 'O')
        str[i] = 'P';
        else if(str[i] == 'u')
        str[i]++;
        else if(str[i] == 'U')
        str[i]++;
    }

    printf("Modified string: %s\n", str);
}


int isLuckyNumber(int num)
{
    int f = 1;
    if(num == 0 || num == 1 || num % 2 == 0)
    f = 0;
    else
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            f = 0;
            break;
        }
    }

    return f;
}
