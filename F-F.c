#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, length;
    char number[130];
    gets(number);
    length = strlen(number);
    for (int i = 0; i < length; i++)

    {

        if (number[i] == '4' || number[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}