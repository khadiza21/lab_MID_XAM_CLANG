#include <stdio.h>
#include <string.h>

int main()
{
    int number;
    scanf("%d", &number);

    for (int x = 1; x <= number; x++)
    {
        char name[120];
        // gets(name);
        scanf("%s", &name);

        for (int i = 0; i < strlen(name); i++)
        {
            // for (int j = i + 1; name[j] != '\0'; j++)
            // {
            //     if (name[j] == name[i])
            //     {
            //         for (int k = j; name[k] != '\0'; k++)
            //         {
            //             name[k] = name[k + 1];
            //         }
            //     }
            // }
            if (i == 0 || i % 2 == 0 || i == strlen(name) - 1)
                printf("%c", name[i]);
        }

        printf("\n");
    }
}
