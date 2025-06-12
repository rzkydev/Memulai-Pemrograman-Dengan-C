#include <stdio.h>

void pola1(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pola2(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pola3(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == N) printf("o");
            else printf("*");
        }
        printf("\n");
    }
}

void anak_ayam() {
    for (int i = 10; i >= 1; i--) {
        if (i > 1) {
            printf("Anak ayam turun %d, mati 1 tinggal %d\n\n", i, i - 1);
        } else {
            printf("Anak ayam turun 1, mati 1 tinggal induknya\n");
        }
    }
}

void deret_penjumlahan() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    int total = 0;
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        total += i;
        if (i < N) printf("+");
    }
    printf("=%d\n", total);
}

void deret_ganjil() {
    int N;
    while (1) {
        printf("Masukkan nilai N (0 untuk keluar): ");
        scanf("%d", &N);
        if (N == 0) break;
        int total = 0;
        for (int i = 0; i < N; i++) {
            int bil = 2 * i + 1;
            printf("%d", bil);
            total += bil;
            if (i < N - 1) printf("+");
        }
        printf("=%d\n", total);
    }
}

void deret_harmonik(int N) {
    double total = 0.0;
    for (int i = 1; i <= N; i++) {
        total += 1.0 / i;
    }
    printf("Jumlah deret harmonik 1 + 1/2 + ... + 1/%d = %.5lf\n", N, total);
}

void deret_berganti(int N) {
    double total = 0.0;
    for (int i = 1; i <= N; i++) {
        double suku = 1.0 / (i * 10);
        if (i % 2 == 0) total -= suku;
        else total += suku;
    }
    printf("Jumlah deret 1 - 1/20 + 1/30 - ... + 1/%d0 = %.5lf\n", N, total);
}

void faktorial_terbatas() {
    int N = 1, hasil = 1;
    while (hasil * (N + 1) < 3267) {
        N++;
        hasil *= N;
    }
    printf("Faktorial terbesar dengan hasil < 3267 adalah %d! = %d\n", N, hasil);
}

void deret_fibonacci(int N) {
    int a = 0, b = 1;
    printf("Fibonacci: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int pilihan, N;
    do {
        printf("\nMenu:\n");
        printf("1. Pola Segitiga 1\n2. Pola Segitiga Terbalik\n3. Pola o*o\n4. Lagu Anak Ayam\n5. Deret Penjumlahan\n6. Deret Ganjil\n7. Deret Harmonik\n8. Deret Berganti Tanda\n9. Faktorial Terbatas\n10. Deret Fibonacci\n0. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 3) {
            printf("Masukkan nilai N: ");
            scanf("%d", &N);
        }

        switch(pilihan) {
            case 1: pola1(N); break;
            case 2: pola2(N); break;
            case 3: pola3(N); break;
            case 4: anak_ayam(); break;
            case 5: deret_penjumlahan(); break;
            case 6: deret_ganjil(); break;
            case 7:
                printf("Masukkan nilai N: ");
                scanf("%d", &N);
                deret_harmonik(N);
                break;
            case 8:
                printf("Masukkan nilai N: ");
                scanf("%d", &N);
                deret_berganti(N);
                break;
            case 9: faktorial_terbatas(); break;
            case 10:
                printf("Masukkan jumlah suku Fibonacci: ");
                scanf("%d", &N);
                deret_fibonacci(N);
                break;
        }
    } while(pilihan != 0);
    return 0;
}
