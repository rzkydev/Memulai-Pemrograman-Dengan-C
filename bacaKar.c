/* File: bacaKar.c */
/* Penulis : Muhammad Rizky Aulia Ramadhan */
/* Deskripsi : */

#include <stdio.h>
int main ()
{
    /* Kamus */
    char cc;
    char c;

    /* Algoritma */
    printf("hello\n");
    printf("baca 1 karakter saja : ");scanf("%c", &cc);
    printf("%c\n", cc);
    printf("baca 1 karakter lagi : ");scanf(" %c", &c); /*ketikkan angka 65 */
    printf("%d\n", c);
    return 0;
}