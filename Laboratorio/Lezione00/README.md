# Traccia: Creazione e Modifica di un Array in C

**Descrizione:**

Scrivi un programma in linguaggio C che permetta all'utente di eseguire diverse operazioni su un array di 5 numeri. Il programma dovrebbe fornire un menu con le seguenti opzioni:

1. **Creazione dell'Array:** Selezionando questa opzione, l'utente può creare un array di 5 numeri interi.

2. **Modifica dell'Array:** Selezionando questa opzione, l'utente può modificare l'array precedentemente creato. L'utente dovrebbe inserire i nuovi valori attraverso i puntatori.

3. **Somma degli Elementi:** Selezionando questa opzione, il programma deve calcolare la somma di tutti gli elementi nell'array e mostrarla all'utente.

**Requisiti:**

- Prima di permettere all'utente di modificare l'array o calcolare la somma degli elementi, verifica se l'array è stato creato. Se non è stato creato, visualizza un messaggio di errore e chiedi all'utente di creare l'array prima di eseguire altre operazioni.

- Utilizza puntatori per modificare l'array quando l'utente seleziona l'opzione 2.

- Implementa un controllo per assicurarti che l'utente non possa inserire valori al di fuori di un certo intervallo (ad esempio, numeri interi da 1 a 100).

**Esempio di Esecuzione:**


Benvenuto nel programma di gestione dell'array!

1. Creazione dell'Array
2. Modifica dell'Array
3. Somma degli Elementi
4. Uscita

Seleziona un'opzione: 1
Array creato con successo!

Seleziona un'opzione: 2
Inserisci nuovi valori per l'array:
Nuovo Valore 1: 42
Nuovo Valore 2: 65
Nuovo Valore 3: 78
Nuovo Valore 4: 23
Nuovo Valore 5: 91
Array modificato con successo!

Seleziona un'opzione: 3
La somma degli elementi nell'array è: 299

Seleziona un'opzione: 4
Grazie per aver usato il programma. Arrivederci!
