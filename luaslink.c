/* File: luaslink.c */
/* Penulis : Muhammad Rizky Aulia Ramadhan */
/* Deskripsi : */
/* Membaca jari-jari, menghitung luas lingkaran */
/* latihan pemakaian konstanta */
#include<stdio.h>
int main ()
{   /* Kamus */
    const float pi = 3.1415;
    float r;
    /* program */
    /* baca data */
    printf ("Jari-jari lingkaran =");
    scanf ("%f", &r);
    /* Hitung dan tulis hasil */
    printf ("Luas lingkaran = %f\n", pi * r * r);
    printf ("Akhir program \n");
    return 0;
}