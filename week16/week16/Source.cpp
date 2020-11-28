#include <stdio.h>

void toggleCase(char* str);

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets_s(str);

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("\nString after toggling case: %s", str);

    return 0;
}

void toggleCase(char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}