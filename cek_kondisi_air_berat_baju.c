#include <stdio.h>
#include <string.h>

void cek_air() {
    float T;
    printf("Masukkan temperatur air (dalam Celsius): ");
    scanf("%f", &T);

    if (T <= 0) {
        printf("Keadaan air: Beku\n");
    } else if (T < 100) {
        printf("Keadaan air: Cair\n");
    } else {
        printf("Keadaan air: Uap\n");
    }
}

void cek_berat_badan() {
    int umur;
    char gender;
    float berat;

    printf("Masukkan umur (tahun): ");
    scanf("%d", &umur);
    printf("Masukkan jenis kelamin (L untuk laki-laki, P untuk perempuan): ");
    scanf(" %c", &gender);
    printf("Masukkan berat badan (kg): ");
    scanf("%f", &berat);

    if (umur < 18) {
        // Anak-anak
        if (gender == 'L') {
            if (berat < 25) printf("Kategori: Kurus\n");
            else if (berat <= 40) printf("Kategori: Ideal\n");
            else printf("Kategori: Gemuk\n");
        } else {
            if (berat < 23) printf("Kategori: Kurus\n");
            else if (berat <= 38) printf("Kategori: Ideal\n");
            else printf("Kategori: Gemuk\n");
        }
    } else {
        // Dewasa
        if (gender == 'L') {
            if (berat < 55) printf("Kategori: Kurus\n");
            else if (berat <= 75) printf("Kategori: Ideal\n");
            else printf("Kategori: Gemuk/Kegemukan\n");
        } else {
            if (berat < 45) printf("Kategori: Kurus\n");
            else if (berat <= 65) printf("Kategori: Ideal\n");
            else printf("Kategori: Gemuk/Kegemukan\n");
        }
    }
}

void cek_ukuran_baju() {
    float panjang, lebar;
    printf("Masukkan panjang baju (cm): ");
    scanf("%f", &panjang);
    printf("Masukkan lebar bahu (cm): ");
    scanf("%f", &lebar);

    if (panjang <= 60 && lebar <= 40) {
        printf("Ukuran Baju: S (Small)\n");
    } else if ((panjang <= 70 && lebar <= 50) || (panjang > 60 && panjang <= 70)) {
        printf("Ukuran Baju: M (Medium)\n");
    } else {
        printf("Ukuran Baju: L (Large)\n");
    }
}

int main() {
    int pilihan;
    while (1) {
        printf("\nMenu:\n1. Cek Keadaan Air\n2. Kategori Berat Badan\n3. Ukuran Baju\n4. Keluar\nPilihan Anda: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) cek_air();
        else if (pilihan == 2) cek_berat_badan();
        else if (pilihan == 3) cek_ukuran_baju();
        else if (pilihan == 4) break;
        else printf("Pilihan tidak valid.\n");
    }

    return 0;
}
