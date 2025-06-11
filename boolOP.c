/* File: boolOP.c */
/* Penulis : Muhammad Rizky Aulia Ramadhan */
/* Deskripsi : */
/* Contoh perhitungan aljabar boolen, perhatikan cara penulisan
    AND dan OR serta NOT */

#include <stdio.h>

int main () {
    /* Kamus */
    int TRUE = 1;
    int FALSE = 0;

    /* Algoritma */
    printf("TRUE AND TRUE = %d\n", TRUE && TRUE);
    printf("TRUE OR FALSE = %d\n", TRUE || FALSE);
    printf("FALSE AND TRUE = %d\n", FALSE && TRUE);
    printf("FALSE OR FALSE = %d\n", FALSE || FALSE);
    printf("NOT TRUE = %d\n", !TRUE);
    printf("NOT FALSE = %d\n", !FALSE);
}