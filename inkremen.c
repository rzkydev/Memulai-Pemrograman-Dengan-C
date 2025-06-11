/* File: inkremen.c */
/* Penulis : Muhammad Rizky Aulia Ramadhan */
/* Deskripsi : */                                               
/* Efek dari operator ++ */

#include <stdio.h>

int main () {
    /* Kamus */
    int i;

    /* Program */

    i = 3;
    printf("Nilai i = %d\n", i, i++);
    i = 3;
    printf("%d\n", ++i);

    return 0;
}