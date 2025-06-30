#include <stdio.h>


void removeAllDuplicates(char str[]);
int getSize(char str[]);
void checkPalindrome(char *str);


int main()
{
    char str[100];
    fgets(str, 100, stdin);


    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    removeAllDuplicates(str);
    int size = getSize(str);
    checkPalindrome(str);


    return 0;

}

void removeAllDuplicates(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                for(int k = 0; str[k] != '\0'; k++)
                {
                    str[j + k] = str[j + 1 + k];
                }
                j--;
            }
        }
    }

    printf("%s\n", str);

}

int getSize(char str[])
{
    int size = 0;
    for(int i = 0; str[i] != '\0'; i++)
    size++;

    return size;
}

void checkPalindrome(char *str)
{
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++)
        len++;


    int f = 0;
    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            f = 1;
            break;
        }
    }

    if(f == 1)
    printf("not palindrome\n");
    else
    printf("palindrome\n");
}
