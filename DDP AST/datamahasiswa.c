#include <stdio.h>

int main() {
    char nama[50], nim[20];
    int umur;

    printf("Masukkan nama: ");
    scanf("%[^\n]s", nama);
    printf("Masukkan umur: ");
    scanf("%d", &umur);
    printf("Masukkan NIM: ");
    scanf("%s", nim);

    printf("\n--- Data Mahasiswa ---\n");
    printf("Nama : %s\n", nama);
    printf("Umur : %d tahun\n", umur);
    printf("NIM  : %s\n", nim);
    return 0;
}