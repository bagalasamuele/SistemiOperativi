#include <stdio.h>
#include <string.h>

int main()
{
    char input[10];

    printf("Inserisci una frase: ");
    fgets(input, sizeof(input), stdin);

    printf("Hai inserito: %s\n", input);

    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (input[i] == input[j])
                count++;
        }
        if (count > 1)
            printf("[%c] %d\n", input[i], count);
    }

    return 0;
}
