#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    int v1[10];
    int v2[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Inserisci un intero: ");
        fgets(input, sizeof(input), stdin);
        v1[i] = strtol(input, NULL, 10);
    }

    int sum = 0;

    for (int j = 0; j < 10; j++)
    {
        sum = 0;
        for (int k = j; k < 10; k++)
        {
            sum = sum + v1[k];
        }
        v2[j] = sum;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", v2[i]);
    }

    return 0;
}
