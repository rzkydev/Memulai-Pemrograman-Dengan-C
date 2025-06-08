/* File : assigni.c */
/* Penulis : Muhammad Rizky Aulia Ramadhan */
/* Mengisi variabel i yg ber-type in dengan nilai 5 dan menuliskannya */

#include <stdio.h>

int main()
{ /* Kamus */
    int i;

    /* Algoritma */
    i = 5; /* sekarang variabel i akan bernilai 5 */
    printf("Ini nilai i : %d \n", i);

    i = i + 1; /* nilai i ditambah 1, hasilnya disimpan di i */
    printf("Ini nilai i : %d \n", i);

    return 0;
}