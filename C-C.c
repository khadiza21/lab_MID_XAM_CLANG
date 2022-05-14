#include <stdio.h>
int main()

{
    int number, r = 0, g = 0, b = 0;
    char p;
    scanf("%d", &number);
    scanf("%c", &p);
    // fflush(stdin);

    char word[number];

    // gets(word);
     scanf("%s", &word);

    for (int i = 0; i < number; i++)
    {

        if (word[i] == 'R')
            while (word[i + 1] == 'R')
            {

                r++;
                i++;
            }

        if (word[i] == 'G')
            while (word[i + 1] == 'G')
            {

                g++;
                i++;
            }

        if (word[i] == 'B')
            while (word[i + 1] == 'B')
            {

                b++;
                i++;
            }
    }

    printf("%d\n", r + g + b);

    return 0;
}