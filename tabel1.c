/* File: tabel1.c */
/* Penulis : Muhammad Rizky Aulia Ramadhan */
/* Deskripsi : */
/* Mendefinisikan array dan mengisi nilainya */

#include <stdio.h>

int main () {
    /* Kamus : */

    /* Kamus */
    int Tab [5] = {1, 2, 3, 4, 5}; /* Tab[0]=1; Tab[1]=2; . .. Tab[4]=5 */
    float TabX [3] = {1.5, 3.5E2, 9.99};
    char Tabchar [4] = {'1', '2', '@', 'Z'};

    int i; /* untuk iterasi indeks tabel */
    /* menuliskan isi Tab berderet ke kanan*/

    for (i = 0; i < 5; i++) {
        printf("Tab[%d] = %d ", i, Tab[i]);
    }

    /* Latihan : tuliskan nilai TabX dan TabChar */
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("TabX[%d] = %.2f ", i, TabX[i]);
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("Tabchar[%d] = %c ", i, Tabchar[i]);
    }

    printf("\n");

    return 0;
}