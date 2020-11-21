#include <stdio.h>

void trim(char* str);


int main()
{
    char str[100];

    printf("Enter any string: ");
    gets_s(str);

    printf("\nString before trimming white space: \n'%s'", str);

    trim(str);

    printf("\n\nString after trimming white space: \n'%s'", str);

    return 0;
}

void trim(char* str)
{
    int index, i;

    index = 0;
    while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }

    i = 0;
    while (str[i + index] != '\0')
    {
        str[i] = str[i + index];
        i++;
    }
    str[i] = '\0'; 

    i = 0;
    index = -1;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index = i;
        }

        i++;
    }

    str[index + 1] = '\0';
}