#include <stdio.h>
#include <string.h>

int main()
{
    int number, limit;
    scanf("%d%d", &number, &limit);
    int numbers[number];

    for (int i = 0; i < number; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < number; i++)
    {

        printf("%d ", numbers[(i + limit) % number]);
    }
}