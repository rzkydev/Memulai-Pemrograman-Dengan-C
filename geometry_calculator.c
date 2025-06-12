#include <stdio.h>

// Fungsi menghitung luas dan keliling persegi
float luasPersegi(float sisi) {
    return sisi * sisi;
}

float kelilingPersegi(float sisi) {
    return 4 * sisi;
}

// Fungsi menghitung luas dan keliling persegi panjang
float luasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

float kelilingPersegiPanjang(float panjang, float lebar) {
    return 2 * (panjang + lebar);
}

// Fungsi menghitung luas dan keliling lingkaran
float luasLingkaran(float jariJari) {
    return 3.14f * jariJari * jariJari;
}

float kelilingLingkaran(float jariJari) {
    return 2 * 3.14f * jariJari;
}

// Fungsi untuk menampilkan hasil
void tampilkanHasil(const char* jenis, float luas, float keliling) {
    printf("\n=== %s ===\n", jenis);
    printf("Luas     : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);
}

int main() {
    float sisi, panjang, lebar, jariJari;

    // Input dan hitung persegi
    printf("Masukkan sisi persegi: ");
    scanf("%f", &sisi);
    tampilkanHasil("Persegi", luasPersegi(sisi), kelilingPersegi(sisi));

    // Input dan hitung persegi panjang
    printf("\nMasukkan panjang persegi panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan lebar persegi panjang: ");
    scanf("%f", &lebar);
    tampilkanHasil("Persegi Panjang", luasPersegiPanjang(panjang, lebar), kelilingPersegiPanjang(panjang, lebar));

    // Input dan hitung lingkaran
    printf("\nMasukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);
    tampilkanHasil("Lingkaran", luasLingkaran(jariJari), kelilingLingkaran(jariJari));

    return 0;
}
