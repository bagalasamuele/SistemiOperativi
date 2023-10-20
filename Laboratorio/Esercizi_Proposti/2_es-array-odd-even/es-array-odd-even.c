#include <stdio.h>
#include <stdlib.h>
int main()
{
    char input[100];
    int arr[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Inserisci un intero: ");
        fgets(input, sizeof(input), stdin);
        arr[i] = strtol(input, NULL, 10);
    }

    for (int i = 1; i < 7; i += 2)
    {
        if (i % 2 != 0)
            printf("%d\n", arr[i]);
    }



    for (int i = 0; i < 7; i += 2)
    {
        if (i % 2 == 0)
            printf("%d\n", arr[i]);
    }


    return 1;
}