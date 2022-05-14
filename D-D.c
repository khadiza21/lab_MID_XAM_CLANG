#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char name[1010], indexChar;
    int length;
    gets(name);
    length = strlen(name);
    printf("%c", toupper(name[0]));
    for (int i = 1; i < length; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    return 0;
}