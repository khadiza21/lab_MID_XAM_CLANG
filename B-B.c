#include <stdio.h>
int main()
{
    int numbers[110], number, sum = 0, indexValue;
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        scanf("%d", &numbers[i]);
    }

    indexValue = numbers[0];

    for (int i = 1; i < number; i++)
    {
        if (indexValue < numbers[i])
        {
            indexValue = numbers[i];
        }
    }

    for (int i = 0; i < number; i++)
    {
        sum += indexValue - numbers[i];
    }

    printf("%d\n", sum);
}