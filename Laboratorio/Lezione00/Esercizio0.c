#include <stdio.h>
#include <stdbool.h>
int main()
{
    int scelta;
    int array[5] = {0};
    bool arrayCreato = false;

    do
    {
        printf("Benvenuto nel programma di gestione dell'array!\n");
        printf("1. Creazione dell'Array\n");
        printf("2. Modifica dell'Array\n");
        printf("3. Somma degli Elementi\n");
        printf("4. Uscita\n");
        printf("Seleziona un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            printf("Array creato con successo!\n");
            arrayCreato = true;
            break;
        case 2:
            if (arrayCreato == true)
            {
                printf("Inserisci nuovi valori per l'array:\n");

                printf("Array modificato con successo!\n");
            }
            else
            {
                printf("Errore: L'array non è stato creato. Seleziona l'opzione 1 per crearlo.\n");
            }
            break;
        case 3:
            if (arrayCreato == true)
            {
                int somma = 0;
                for (int i = 0; i < 5; i++)
                {
                    somma += array[i];
                }
                printf("La somma degli elementi nell'array è: %d\n", somma);
            }
            else
            {
                printf("Errore: L'array non è stato creato. Seleziona l'opzione 1 per crearlo.\n");
            }
            break;
        case 4:
            printf("Grazie per aver usato il programma. Arrivederci!\n");
            break;
        default:
            printf("Errore: Opzione non valida. Riprova.\n");
        }
    } while (scelta != 4);

    return 0;
}
