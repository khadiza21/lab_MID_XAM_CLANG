#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char name[120], ch;
    int length, count = 1;
    gets(name);
    length = strlen(name);

    for (int i = 1; i < length; i++)
    {
        for (int j = 0; j < length - i; j++)
        {
            if (name[j] > name[j + 1])
            {
                ch = name[j];
                name[j] = name[j + 1];
                name[j + 1] = ch;
            }
        }
    }

    for (int i = 1; i < length; i++)
    {
        if (name[i] != name[i - 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}