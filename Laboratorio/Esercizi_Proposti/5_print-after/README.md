##Es. [print-after]

Si scriva un programma che legge due stringhe di caratteri (s1 e s2) di lunghezza massima di 80 caratteri mediante fgets.
Preliminarmente, elimina i caratteri non stampabili da entrambe le stringhe le stringhe s1 e s2 scrivendo il byte 0 sul primo byte non stampabile (un byte `e stampabile se ha codice ASCII compreso fra 32 e 126). Ricorda: fgets memorizza nella stringa anche il carattere “a capo” che deve quindi essere eliminato.
 Se s2 `e contenuta all’interno di s1, il programma stampa la parte di s1 che segue s2.
 Se s2 non `e contenuta all’interno di s1, non stampa niente. Per esempio, se le stringhe s1 e s2 sono rispettivamente:


Ciao a tutti
ia


allora verr`a stampato
o a tutti
Si realizzi tale programma:
1. evitando di includere le funzioni della libreria string.h
2. evitando le parentesi quadre per riferire gli elementi di s1 e s2