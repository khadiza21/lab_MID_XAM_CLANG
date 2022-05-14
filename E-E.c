#include <stdio.h>
#include <string.h>

int main()
{
    int number, word[128] = {0}, count = 0;
    scanf("%d", &number);

    char name[100];
    scanf("%s", name);

    for (int i = 0; i < number; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
        word[name[i]] = 1;
    }
    for (int i = 0; i < 128; ++i)
    {
        count += word[i];
    }
    if (count == 26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}