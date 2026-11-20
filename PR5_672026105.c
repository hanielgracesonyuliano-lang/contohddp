#include <stdio.h>

int main() {
    int matriks[3][3];
    int i, j, jumlah;
    float rata;

    printf("PROGRAM MENJUMLAH MATRIKS\n\n");

    for (i = 0; i < 3; i++) {
        printf("Masukkan elemen baris ke-%d:\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("Matriks[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\nHASIL MATRIKS\n");

    for (i = 0; i < 3; i++) {
        jumlah = 0;

        for (j = 0; j < 3; j++) {
            printf("%d ", matriks[i][j]);
            jumlah = jumlah + matriks[i][j];
        }

        rata = (float)jumlah / 3;

        printf(" Jumlah = %d", jumlah);
        printf(" Rata-rata = %.1f\n", rata);
    }

    return 0;
}