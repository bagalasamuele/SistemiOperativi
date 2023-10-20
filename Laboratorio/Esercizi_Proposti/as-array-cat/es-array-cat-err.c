#include <stdio.h>
// #include <string.h>

int main()
{
    int len1 = 0, len2 = 0;
    char arr1[] = {'c', 'i', 'a', 'o', '\0'};
    char arr2[] = {'s', 'a', 'm', 'u', 'e', 'l', 'e', '\0'};
    len1 = sizeof(arr1);
    len2 = sizeof(arr2);
    int len3 = len1 + len2;
    char arr3[len3];
    int puntatore = 0;

    for (int i = 0; i < len1; i++)
    {
        arr3[puntatore] = arr1[i];
        puntatore++;
    }

    for (int j = 0; j < len2; j++)
    {
        arr3[puntatore] = arr2[j];
        puntatore++;
    }

    printf("la lunghezza di 1 e' %d\nla lunghezza di 2 e' %d\n", len1, len2);

    for (int i = 0; i < len3; ++i)
    {
        printf("%c ", arr3[i]);
    }

    return 0;
}
