#include <stdio.h>
#include <math.h>
#include <string.h>

void hitung_jarak() {
    float v, t;
    printf("Masukkan kecepatan (m/s): ");
    scanf("%f", &v);
    printf("Masukkan waktu tempuh (s): ");
    scanf("%f", &t);
    printf("Jarak yang ditempuh: %.2f meter\n", v * t);
}

void luas_persegi() {
    float panjang, lebar;
    printf("Masukkan panjang (m): ");
    scanf("%f", &panjang);
    printf("Masukkan lebar (m): ");
    scanf("%f", &lebar);
    printf("Luas lantai: %.2f m2\n", panjang * lebar);
}

void volume_kubus() {
    float sisi;
    printf("Masukkan panjang sisi kubus (cm): ");
    scanf("%f", &sisi);
    printf("Volume kubus: %.2f cm3\n", pow(sisi, 3));
}

void kalkulasi_geometri() {
    char pilihan[20];
    float a, b, c, d, r, s, t, phi = 3.14159265359;

    printf("Pilih bentuk (segitiga/persegi/bujur_sangkar/belah_ketupat/jajaran_genjang/lingkaran/kubus/balok/tabung): ");
    scanf("%s", pilihan);

    if (strcmp(pilihan, "segitiga") == 0) {
        printf("Masukkan alas dan tinggi: ");
        scanf("%f %f", &a, &t);
        printf("Masukkan panjang ketiga sisi: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("Luas: %.2f, Keliling: %.2f\n", 0.5 * a * t, a + b + c);
    } else if (strcmp(pilihan, "persegi") == 0 || strcmp(pilihan, "bujur_sangkar") == 0) {
        printf("Masukkan sisi: ");
        scanf("%f", &s);
        printf("Luas: %.2f, Keliling: %.2f\n", s * s, 4 * s);
    } else if (strcmp(pilihan, "belah_ketupat") == 0) {
        printf("Masukkan diagonal 1 dan 2: ");
        scanf("%f %f", &a, &b);
        printf("Masukkan sisi: ");
        scanf("%f", &s);
        printf("Luas: %.2f, Keliling: %.2f\n", 0.5 * a * b, 4 * s);
    } else if (strcmp(pilihan, "jajaran_genjang") == 0) {
        printf("Masukkan alas dan tinggi: ");
        scanf("%f %f", &a, &t);
        printf("Masukkan sisi miring: ");
        scanf("%f", &b);
        printf("Luas: %.2f, Keliling: %.2f\n", a * t, 2 * (a + b));
    } else if (strcmp(pilihan, "lingkaran") == 0) {
        printf("Masukkan jari-jari: ");
        scanf("%f", &r);
        printf("Luas: %.2f, Keliling: %.2f\n", phi * r * r, 2 * phi * r);
    } else if (strcmp(pilihan, "kubus") == 0) {
        printf("Masukkan sisi: ");
        scanf("%f", &s);
        printf("Luas permukaan: %.2f, Volume: %.2f\n", 6 * s * s, pow(s, 3));
    } else if (strcmp(pilihan, "balok") == 0) {
        float p, l, t;
        printf("Masukkan panjang, lebar, dan tinggi: ");
        scanf("%f %f %f", &p, &l, &t);
        printf("Luas permukaan: %.2f, Volume: %.2f\n", 2 * (p*l + l*t + p*t), p * l * t);
    } else if (strcmp(pilihan, "tabung") == 0) {
        printf("Masukkan jari-jari dan tinggi: ");
        scanf("%f %f", &r, &t);
        printf("Luas permukaan: %.2f, Volume: %.2f\n", 2 * phi * r * (r + t), phi * r * r * t);
    } else {
        printf("Pilihan tidak tersedia.\n");
    }
}

int main() {
    int pilihan, i, max_iter;

    printf("Berapa kali Anda ingin menggunakan program ini? ");
    scanf("%d", &max_iter);

    for (i = 0; i < max_iter; i++) {
        printf("\nMenu:\n1. Hitung Jarak\n2. Luas Persegi\n3. Volume Kubus\n4. Kalkulasi Geometri\n5. Keluar\nPilihan Anda: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) hitung_jarak();
        else if (pilihan == 2) luas_persegi();
        else if (pilihan == 3) volume_kubus();
        else if (pilihan == 4) kalkulasi_geometri();
        else {
            printf("Program berhenti.\n");
            break;
        }
    }

    return 0;
}
